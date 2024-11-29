from selenium import webdriver
from selenium.webdriver.common.by import By

# Keep Google Chrome open after program finishes
chrome_options = webdriver.ChromeOptions()
chrome_options.add_experimental_option("detach", False)

driver = webdriver.Chrome(options=chrome_options)

driver.get("https://www.python.org/")

search_bar = driver.find_element(By.NAME, value="q")

button = driver.find_element(By.ID, value="submit")

documentation_link = driver.find_element(By.CSS_SELECTOR, value=".documentation-widget a")

# bug_link = driver.find_element(By.XPATH, value='//*[@id="site-map]/div[2]/div/ul/li[3]/a')

tier_1 = driver.find_elements(By.CLASS_NAME, value="tier-1")

event_times = driver.find_elements(By.CSS_SELECTOR, value=".event-widget time")
event_names = driver.find_elements(By.CSS_SELECTOR, value=".event-widget li a")
events = {}

for n in range(len(event_times)):
    events[n] = {
        "time": event_times[n].text,
        "name": event_names[n].text,
}

print(events)

driver.quit()