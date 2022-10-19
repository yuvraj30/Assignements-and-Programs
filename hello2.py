# list=["a","b","c","d","e","f","g","h"]
# list.append("z")
# print (list)
# list.extend(["abc","b","c","d","e","f"])
# print (list)
# tuple=("basketball","hockey","baseball")
# print (tuple)

# list2=["python",".Net"]
# list.append("java")
# list.extend(["c","c#"]) 
# print ("\n",list)
# list.insert(1,'c')
# print ("\n",list)
# list.remove("c")
# print ("\n",list)   
# print (sorted(list))
# print ("\n",list[::-1])
# thistuple=("hockey","baseball","cricket","football","tennis")
# print (thistuple[-1])
# print(thistuple[2:5])
# print (thistuple[2:])

# print (thistuple[-4:-1])
# for x in thistuple:
#  print (x)
   
# mytuple=("orange","banana","apple")

# y=list(mytuple)
# y.remove("banana")
# thistuple=tuple(y)
# print (thistuple)

thisset={"horror","comedy","drama","fantasy","action",}
print (thisset)

for x in thisset:
 print(x)

print ("comedy" in thisset)
thisset.add("sci-fi")
print(thisset)


new={"skyfall","misssion impossible","godfather"}
thisset.update(new)
print(thisset)

x=thisset.pop()
print(x)
print(thisset)

def compare_to_five(y):
    if y>5:
        return "greater than five"
    elif y<5:
        return "less than five"
    elif y<0:
        return "less than zero"


print(compare_to_five(4))        

print(compare_to_five(-1))

x=3+5j
y=5j
z=-6j
print(x)
print(type(x))
print(y)
print(z)

x=1
y=2.8

