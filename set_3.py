# Set 3
import pandas as pd
data = pd.read_csv('AQI_Data.csv')


city_counts = {}  # creating an empty dictionary to store count..

for index, row in data.iterrows():
    if row['PM2.5'] > 100:  # Check if PM2.5 greater than 100
        city = row['City']
        if city in city_counts:
            city_counts[city] += 1
        else:
            city_counts[city] = 1 


print("Count of rows where PM2.5 > 100 for each city:")  # printing the results..
for city, count in city_counts.items():
    print(f"{city}: {count}")   
