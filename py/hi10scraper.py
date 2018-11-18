#!/usr/bin/python3
from bs4 import BeautifulSoup
import pickle
import requests
import sys


# Filter the link from unwanted shitty redirects
def _filter(_src = ''):
    _src = _src.replace('https://linkshrink.net/z647=','')
    _src = _src.replace('http://linkshrink.net/z647=','')
    _src = _src.replace('https://www.spaste.com/r/lhb7fn?link=','')
    _src = _src.replace('http://www.spaste.com/r/lhb7fn?link=','')
    _src = _src.replace('https://ouo.io/s/166CefdX?s=','')
    _src = _src.replace('http://ouo.io/s/166CefdX?s=','')
    _src = _src.replace('https://adf.ly/14674075/','')
    _src = _src.replace('http://adf.ly/14674075/','')
    return _src


# Filter the link lisk into a beautiful 'soup'
def _filter_list(_src_list = []):
    _ret_list = []
    for item in _src_list:
        _tmp = _filter(item)
        _ret_list.append(_tmp)
    _ret_list = list(set(_ret_list))
    _ret_list.sort()
    return _ret_list


# Commandline args processing
if (len(sys.argv) < 3) or (len(sys.argv)>3):
    print('Usage: ' + sys.argv[0] + ' <output-filename> <page-url>')
    exit(1)

# Starting requests session
session = requests.Session()

# Loading saved cookies with pickle
print('Loading cookies...',end = '')
try:
    cookies = pickle.load(open('/home/rohan/dev/hi10.cookies','rb'))
except:
    print('Error!\nCookie file is corrupted or not present...\nPlease generate cookie file...')
    exit(1)

for cookie in cookies:
    session.cookies.set(cookie['name'], cookie['value'])
print('Done!')

# Getting response from server with cookies
print('Requesting server for content...',end = '')
try:
    data = session.get(sys.argv[2]).content
except:
    print('Error!\nError trying to get page content...')
    exit(1)
print('Done!')

# Dumping response into BeautifulSoup
print('Loading BeautifulSoup Module...',end = '')
soup = BeautifulSoup(data,'lxml')
links = []
print('Done!')

# Collect the links into list and filter them
print ('Collecting and filtering links...',end = '')
for link in soup.find_all('a',href=True):
    link = link.get('href')
    if ('.mkv' in link) and ('.torrent' not in link):
        links.append(link)
links = _filter_list(links)
print('Done!')

# Open the output file and write the 'links' into it
outfile = '/home/rohan/links/' + sys.argv[1] + '.list' 
with open(outfile,'w') as out:
    for link in links:
        out.write("%s\n" %link)
print('File Written to',outfile)