


# class Infant:
#     def Walk(self):
#         print("Walk called")

# child=Infant()
# child.Walk()


# class Mom():
#     def Walk(self):
#         print("Walk - Mom")
#         print("the address of self",id(self))

# class Infant(Mom):
#     pass

# object=Infant() #with object of child objec walk method  is called

# object.Walk()
# print("the address of child",id(object))

# class Mom():
#     def Walk(self):
#         print("Walk - Mom")

# class Mom():
#     def Walk(self):
#         print("Walk - Mom")
#         print("the address of self",id(self))

# mother=Mom()
# print(type(Mom.Walk))
# print(type(mother.Walk))

# gvar=10
# class mom():
#     "this is _doc_"
#     lvar=100

# print(mom.__dict__)
# print(mom.__doc__)

# class example():
#     def __init__(self):
#         self.__private="I am private"

#         self._protected="I am protected"

#         self.public="I am public"

# obj=example()
# print(obj.public)
# print(obj._protected)
# # print(obj.__private)

class Example():
    def __init__(self):
       print("object constructed")

    def __del__(self):
        print("object deleted")

object=Example()
del(object)

class Date:
    def __init__(self,day,month,year):
        self.day=day
        self.month=month
        self.year=year

    def nyd(cls,day,month,year):
        cls.day=day
        cls.month=month
        cls.year=year
        return cls(cls.day,cls.month,cls.year)

    def ydm(cls,year,day,month):
        cls.day=day
        cls.month=month
        cls.year=year
        return cls(cls.day,cls.month,cls.year)

d1=Date(17,4,2019)
print(d1.year,d1.month,d1.day)
d2=Date.nyd(4,2018,5)
print(d2.day,d2.month,d2.year)