import requests
from bs4 import BeautifulSoup
import re
import csv

URL = 'https://en.wikipedia.org/wiki/List_of_counties_in_Washington'
response = requests.get(URL)
soup = BeautifulSoup(response.content, 'html.parser')


def remove_square_brackets(s):
    return re.sub(r'\[.*?\]', '', s)


# Find the table containing the county data
table = soup.find('table', {'class': 'wikitable'})

# Extract table headers and rows
headers = [header.text.strip() for header in table.findAll('th')]
real_headers = headers[0:9]
county_names = headers[9:48]
print(county_names)
rows = table.findAll('tr')[1:]

# Prepare a list to hold the data
data = []

for i, row in enumerate(rows[:39]):
    columns = row.findAll('td')
    # Extract only the desired columns
    rowData = [
        county_names[i],  # County
        remove_square_brackets(columns[1].text.strip()),  # County seat
        remove_square_brackets(columns[2].text.strip()),  # Est.
        remove_square_brackets(columns[4].text.strip()),  # Etymology
        remove_square_brackets(columns[5].text.strip()),  # Population
        remove_square_brackets(columns[6].text.strip())   # Land area
    ]
    data.append(rowData)

# Write to CSV
with open('washington_counties.csv', 'w', newline='', encoding='utf-8') as f:
    writer = csv.writer(f, delimiter='|')
    # writer.writerow(headers)
    writer.writerows(data)

print("Data saved to 'washington_counties.csv'")
