from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
from webdriver_manager.chrome import ChromeDriverManager


driver = webdriver.Chrome(ChromeDriverManager().install())
chrome_options = webdriver.ChromeOptions()
chrome_options.add_experimental_option("detach", True)


driver = webdriver.Chrome(options=chrome_options)


driver.get("https://github.com/login")

email = driver.find_element(By.NAME, value="login")
password = driver.find_element(By.NAME, value="password")

email.send_keys("your-email")
password.send_keys("your-password")

submit = driver.find_element(By.CSS_SELECTOR, value="#login > div.auth-form-body.mt-3 > form > div > input.btn.btn-primary.btn-block.js-sign-in-button")
submit.click()

driver.switch_to.new_window('tab')
driver.get("URL-of-your-repo-where-you-can-create-a-useless-pr")

localrepo_pr = driver.find_element(By.CSS_SELECTOR, value="#pull-requests-tab")
localrepo_pr.click()

closed_pr = driver.find_element(By.CSS_SELECTOR, value="#js-issues-toolbar > div.table-list-filters.flex-auto.d-flex.min-width-0 > div.flex-auto.d-none.d-lg-block.no-wrap > div > a:nth-child(2)")
closed_pr.click()
