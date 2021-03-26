import pandas as pd
import pprint
# -----------------------Reading Execl File-------------------------------------
df1 = pd.read_excel(r'students.xlsx') 
print("Hello...")
students_data = []
for i in range(0,len(df1)):
    marks = {}
    marks['Roll_No'] = df1['Roll_No'][i]
    marks['Name'] = df1['Name'][i]
    marks['Physics'] = df1['Physics'][i]
    marks['Chemistry'] = df1['Chemistry'][i]
    marks['Math'] = df1['Math'][i]

students_data.append(marks)
#print(students_data)
#pprint.pprint(students_data)
# Reading specific columns to range of rows
print(df1['Name'][2:5])