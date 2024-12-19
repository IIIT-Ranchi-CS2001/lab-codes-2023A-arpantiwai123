import pandas as pd
import numpy  as np
import statistics

df = pd.read_csv('AQI_Data.csv')

print("Displaying the first 5 rows :")   # Display the first 5 rows...
print(df.head())

print("Displaying the last 6 rows :")    # Display the last 6 rows..
print(df.tail(6))

print("Summary statistics for all numeric columns :")   # Displaying the summary statistics..
ans_statistics = df.describe()
print(ans_statistics)

AQI_mean = np.mean(df['AQI'])  
print(f"AQI mean is : {AQI_mean}")

PM2_mean = np.mean(df['PM2.5'])
print(f"PM2.5 mean is : {PM2_mean}")

PM10_mean = np.mean(df['PM10'])
print(f"PM10 mean is : {PM10_mean}")