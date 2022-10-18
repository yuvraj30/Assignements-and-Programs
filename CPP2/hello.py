# lst=['11',1,3]
# fruits=["aplle","cherry","orange","banana"]
# print (lst)
# mylist = ["apple", "orange", "cherry", "banana"]
# print (mylist)
# thisislist = list(("apple", "orange", "cherry", "banana"))
# print (thisislist)
# thislist=["apple", "orange", "cherry", "banana"]
# print(len(thislist))
# list1=["apple", "orange", "cherry", "banana"]
# tuple=["apple", "orange", "cherry", "banana"]
# print(tuple)
# num=list((1,3,5))
# print (num)
# list1=["apple", "orange", "cherry", "banana"]
# list2=[1,5,7,9,3]
# list3=[True,False,False]
# newlist=[x if x!="banana" else "orange" for x in fruits]
# list1=["a","b","c","d","e","f","g","h","i"]
# list2=[1,2,3]
# list4=list2*2
# print(list4)
# list3=list1+list2
# print(list3)
# list1=['physics','chemistry','1997','250']
# list2=[1,2,3,4,5,6,7,8,9,10,11]
# print ("list1[0]: ",list1[0])
# print("list2[1:4]:",list2[1:4])
# print(list2[1:])
# print(list1[2:])
# print(list2[:3])
# x=["apple","orange","cherry","banana"]
# for i in range(2) :
#     print(x)
# thislist=["apple", "orange", "cherry", "banana"]
# i=0
# while i<len(thislist):
#     print("thislist{",i,"}",thislist[i])
#     i=i+1
# newlist0=[x for x in range(10)]
# newlist1=[x for x in range(10) if x < 5]
# newlist2=[x.upper() for x in fruits]
# print(newlist0,newlist1,newlist2)
# fruits=["apple", "orange", "cherry", "kiwi"]
# newlis=[]
# for x in fruits:
#     if "o" in x:
#         newlis.append(x)

# print(newlis)

from operator import truediv


print(bool(0))
print(bool())
print(bool("hell0"))
bool(["hello","how"])
def myFunction() :
    return False

if myFunction():
    print("yes")

else:
    print("no")

x=2.5
print(isinstance(x,int))

def fn(str):
    "this prints a passed string into yhe function"
    mylist.append([1,2,3,4])
    print("values in this function",mylist)
    return 

mylist=[10,20,30,40,50,60]


fn(mylist)
print("values out of this function",mylist) 


def fn(str):
    "this prints a passed string into yhe function"
    print(str)
    return

fn(4)
fn("hello world")

def fn(name,age):
    "this prints a passed string into yhe function"
    print("name",name)
    print("age",age)
    return
   

fn(10,20)

def fn(arg1,*x):
    "this prints a variable passed function"
    print("output is :")
    print(arg1)
    print(x[0])
    for var in x:
        print("hi")
        print(var)

fn(20,30,50,607,9,1)


sum=lambda arg1,arg2:arg1+arg2

print("sum =",sum(20,56))

def myfunc(b):
    return lambda a:a*b

mytripler=myfunc(23)

print(mytripler(3))
