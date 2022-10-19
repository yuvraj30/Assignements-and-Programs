#!/usr/bin/env python
# coding: utf-8

# In[4]:


import pandas as pd
import numpy as np

df = pd.DataFrame()
print (df)


# In[18]:


#printinf list with default coloumns
list1=[1,2,3,4,"a","b"]
print(list1)
df=pd.DataFrame(list1)
print(df)


# In[19]:


print(pd.DataFrame(["a","b","c"]))


# In[24]:


#prinitng list with given index
print(pd.DataFrame(list1,index=[1,2,3,4,5,6]))#no of member should be equal to no of index


# In[22]:


print(pd.DataFrame(["a","b","c"],index=[1,2,3]))


# In[25]:


#for key values
for x, n in df.iteritems():
    print(x,n)


# In[28]:


for row_index, row in df.iterrows():
    print(row_index,row)


# In[30]:


#to print random 
df=pd.DataFrame(np.random.randn(4,3),index=[6,7,8,9],columns=['col1','col2','col3'])
print(df)


# In[33]:


#to print rowwise

for row_i, row in df.iterrows():
    print(row_i,row)
    


# In[34]:


#to print columnwise

for row_i, row in df.iteritems():
    print(row_i,row)


# In[35]:


#itertuples wil return iterator

for row in df.itertuples():
    print(row)


# In[37]:


#reation of dictonaries
a={'A':['a','b','c'],'B':[1,2,3],'C':[100,200,300],'D':['aa','bb','cc']}
print(a)
df=pd.DataFrame(a)
print(df)


# In[38]:


print(pd.DataFrame(a,index=[1,2,3]))


# In[46]:


#with list of dictonaries
data=[{'a':['1','2']},{'a':5,'b':10,'c':20},{'a':11,'h':1,'g':6}]
print(data)
df=pd.DataFrame(data,index=['first','second','third'])
print(df)


# In[54]:


list1=[[1,2,3],[4,5,6]]
df=pd.DataFrame(list1,index=['m','n'],dtype=float)
print(df)


# In[55]:


list1=[['a','b','c'],[1,2,3]]
df=pd.DataFrame(list1,index=['m','n'])
print(df)


# In[58]:


list1=[['a','b','c'],[1,2,3]]
df=pd.DataFrame(list1,columns=['A','B','C'],dtype=float)
print(df)


# In[ ]:




