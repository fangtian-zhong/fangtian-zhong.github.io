import requests
from bs4 import BeautifulSoup
import csv
import re


def remove_square_brackets(s):
    return re.sub(r'\[.*?\]', '', s)


# Fetch the webpage content
url = "https://en.wikipedia.org/wiki/List_of_counties_in_Montana"
response = requests.get(url)
soup = BeautifulSoup(response.content, 'html.parser')

# Find the right table: Wikipedia tables are in the 'wikitable' class
table = soup.find('table', {'class': 'wikitable'})

# Extract table headers
headers = []
for th in table.findAll("th"):
    headers.append(th.text.strip())
real_headers = headers[0:9]
county_names = headers[10:]


# Extract rows
rows = []
for i, row in enumerate(table.findAll("tr")[1:]):  # skip the header row
    rowData = []
    rowData.append(county_names[i])
    for j, td in enumerate(row.findAll("td")):
        if j in [1, 2, 4, 6, 7]:
            rowData.append(remove_square_brackets(td.text.strip().strip('\'"')))
    rows.append(rowData)

# Write to CSV
with open('montana_counties.csv', 'w', newline='', encoding='utf-8') as f:
    writer = csv.writer(f, delimiter='|')
    # writer.writerow(headers)
    writer.writerows(rows)

print("Data saved to 'montana_counties.csv'")
