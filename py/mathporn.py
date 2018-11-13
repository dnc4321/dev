#!/usr/bin/python3
from requests import get
from requests.exceptions import RequestException
from bs4 import BeautifulSoup


def simple_get(url):
    try:
        with get(url, stream = True) as response:
            if is_good(response):
                ret =  response.content
                response.close()
                return ret
            else:
                return None
    except RequestException as e:
        log_error('Error during requests to {0} : {1}'.format(url,str(e)))
        return None


def is_good(response):
    content_type = response.headers['Content-Type'].lower()
    return (response.status_code == 200 and
    content_type is not None and content_type.find('html') > -1)


def log_error(e):
    print(e)