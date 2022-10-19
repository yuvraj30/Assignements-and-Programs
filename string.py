# my_string='hello world'
# print(my_string)
# my_string="""hello world
# this is a string that   will be inserted into the database"""
# print(my_string)

str1="hello world"
str2=" this is python"
str=str1+str2
print(str)
str2=str2*3
print(str2)
str3="1 2 3 4"
print(str3.split())
str3="1, 2 ,3, 4"
print(str3.split(","))


txt = "I like kiwi"

x = txt.replace("kiwi", "apples")

# print(x)
# print(x.upper())

# txt = "     banana     "

# x = txt.rstrip()

# print(x)

if "like" in txt:
    print("yes it is")
else:
   print("no")

print(txt[:5])
print(txt[-5:-2])
age=22
txt="my name is toto and im {}"
print(txt.format(age))
txt2="my name is toto and im "
age2=45

print(txt2+ str(age2))
a,b,c,d=10,20,22,334
def funA():
    a,b,c=100,200,300
    print("in fA ",a,b,c,d)
    def funB():
        a,b=500,74
        print("in fB ",a,b,c,d)
        def funC():
            c,d=514,45
            print("in fc ",a,b,c,d)

        funC()
    funB()
funA()        

lst1=[a,b,c]
lst2=[1,3,5]
lst1,lst2=lst2,lst1
print(lst1)
