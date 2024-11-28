from selenium import webdriver
from selenium.webdriver.common.by import By

# Keep Google Chrome open after program finishes
chrome_options = webdriver.ChromeOptions()
chrome_options.add_experimental_option("detach", True)

driver = webdriver.Chrome(options=chrome_options)
driver.get("Your Product link here")

price_dollar = driver.find_element(By.CLASS_NAME, value="your price dollar or rupee class value")
price_cents = driver.find_element(By.CLASS_NAME, value="your price cents or paise class value")

print(f"The price of your product is {price_dollar.text}.{price_cents.text}")

driver.quit()