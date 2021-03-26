import pandas as pd
import pprint
# -----------------------Reading Execl File-------------------------------------
df1 = pd.read_excel(r'students.xlsx') 
print("Hello...")

# Reading Specific Rows
# creating a list of dataframe columns
columns = list(df1)
print(columns)
for i in columns:
# printing the third element of the column
    print(df1[i][2])

# Reading Specific Columns
for i in range(0,len(df1)):
    print(df1['Roll_No'][i])

