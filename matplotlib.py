#!/usr/bin/env python
# coding: utf-8

# In[9]:


import matplotlib.pyplot as plt
import numpy as np
x=np.array([1,8])
y=np.array([4,18])
plt.plot(x,y,'o')
plt.show()


# In[11]:


x=np.array([1,8])
y=np.array([1,5])
plt.plot(y)
plt.show()


# In[14]:


y=np.array([3,8,4,5,6,12])
plt.plot(y)
plt.ylabel("y-axis")
plt.xlabel("x-axis")
plt.show()


# In[21]:


y=np.array([3,8,4,5,6,12])
x=np.array([4,5,6,5,6,12])
plt.plot(x,y)
plt.ylabel("y-axis")
plt.xlabel("x-axis")
plt.grid(color='red',linestyle='--',linewidth=1)
plt.show()


# In[29]:


y=np.array([3,8,4,5,6,12])
x=np.array([4,5,6,5,4,7])

plt.ylabel("y-axis")
plt.xlabel("x-axis")
plt.grid(color='yellow',linestyle='--',linewidth=0.5)
plt.scatter(x,y,color='black')
plt.show()


# In[35]:



# Import libraries
import matplotlib.pyplot as plt
import numpy as np
 
# x = np.linspace(-6, 6, 50)
 
# fig = plt.figure(figsize = (14, 8))
 
# Plot y = cos(x)
y = np.cos(x)
plt.plot(x, y, 'b', label ='cos(x)')
plt.show()


# In[42]:


y=np.array(["a","b","c","d"])
x=np.array([0.4,0.16,0.32,0.64])
plt.barh(x,y,height=1)
plt.bar(x,y,color="red")
plt.show()


# In[43]:


x=np.random.normal(170,10,250)
plt.hist(x)


# In[48]:


y=np.array([30,25,5])
mylabels=["orange","apple","banana"]
plt.pie(y,labels=mylabels)
plt.show()


# In[ ]:




