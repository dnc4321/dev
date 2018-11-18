#!/usr/bin/python3
import pickle
from selenium import webdriver
from selenium.webdriver.firefox.options import Options
import getpass

opts = Options()
opts.headless = True
driver = webdriver.Firefox(options=opts)
try:
    driver.get('https://hi10anime.com/wp-login.php')
except:
    print('Network Error...')
    driver.close()
    exit(1)

user_login = driver.find_element_by_id('user_login')
user_pass = driver.find_element_by_id('user_pass')
wp_submit = driver.find_element_by_id('wp-submit')

username = input('Username: ')
password = getpass.getpass('Password: ')
try:
    user_login.send_keys(username)
    user_pass.send_keys(password)
    wp_submit.click()
    accept_cookies = driver.find_element_by_id('cookie_action_close_header')
    accept_cookies.click()
    cookies = driver.get_cookies()
except:
    print('Authentication Error...')
    driver.close()
    exit(1)

try:
    pickle.dump(cookies,open('/home/rohan/dev/hi10.cookies','wb'))
except:
    print('Error saving cookies to disk...')
    driver.close()
    exit(1)
print('Cookie generation Successful...!!!')
driver.close()
