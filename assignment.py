#!/usr/bin/env python
# coding: utf-8

# In[12]:


import pandas as pd
df = pd.read_csv("D:\\games.csv")
print(df)

#give count of null in each column
print(df.isnull().sum())


# In[13]:


#to fill each null with respective value
df2 = df.fillna({
    'GAME_DATE_EST':'2022-03-12',
    'GAME_ID  ' :'22101009',
    'GAME_STATUS_TEXT'    :'1610612761  ',
    'date_added':'March 17,2022',
   
})

#again counting null in each column
print(df2.isnull().sum())
print(df2)


# In[6]:


#print T or F if any row is duplicate or not
print("Duplicate or Not",df2.duplicated())

#prints total no of duplicate rows
print("Total duplicates",df2.duplicated().sum())


# In[3]:


import pandas as pd
df = pd.read_csv("D:\\assignment.csv")
# computing number of rows
print("No of rows in file: ",len(df.axes[0]))

# computing number of columns
print("No of columns in file: ",len(df.axes[1]))


# In[3]:


#to get specific rows
import pandas as pd
pd.read_csv('D:\\assignment.csv',usecols=["title"],nrows=3)


# In[8]:


#removing columns
import pandas as pd
df = pd.read_csv("D:\\assignment.csv")
df_dropped_multiple = df.drop(['title', 'country'], axis=1)
df_dropped_multiple.head()


# In[ ]:




