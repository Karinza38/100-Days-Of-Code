from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys

chrome_options = webdriver.ChromeOptions()
chrome_options.add_experimental_option("detach", True)

driver = webdriver.Chrome(options=chrome_options)

driver.get("https://en.wikipedia.org/wiki/Main_Page")

# wikipedia_article_count = driver.find_element(By.XPATH, value='//*[@id="articlecount"]/a[1]')
# it is possible to use the method given above but the method given below should also get the job done.
wikipedia_article_count = driver.find_element(By.CSS_SELECTOR, value="#articlecount a")

# print(wikipedia_article_count.text)

all_portals = driver.find_element(By.LINK_TEXT, value="Content portals")

search = driver.find_element(By.NAME, value="search")
search.send_keys("your-search-here", Keys.ENTER)

# driver.quit()