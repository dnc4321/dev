import requests
from bs4 import BeautifulSoup

payload = {
    'user_login': 'tipper00flipper',
    'user_pass': 'kepsake550@gmail.com'
}
url = 'https://hi10anime.com/wp-login.php'
r = requests.post(url,data = payload)
