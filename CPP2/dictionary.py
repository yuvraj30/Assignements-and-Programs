dict={1:"python",2:"android"}
print(dict[1])
for k in sorted(dict.keys()):
    print(k,'=>', dict[k])

    
    
    
thisdict = {"brand":"ford","model":"mustang","year":"1958"}
print(thisdict)

#dictionary methods
marks={}.fromkeys(['maths','english','science'],0)
print(marks)

for item in marks.items():
    print(item)

print(list(sorted(marks.keys())))

squares={x:x*x for x in range(6)}
print(squares)


squares={}
for x in range(6):
    squares[x] = x*x
print(squares)



squares={1:1,3:9,4:16,5:25}
print(1 in squares)
print(2 not in squares)

for i in  squares:
    print(i,squares[i])
    

my_info={'name': 'yuvraj', 'age':22, 'location':'noida'}
num=my_info.pop('name')
print(num)





#nested

disc={

    "child1":{

        "name":"sakshi",

        "year":2001

    },

    "child2":{

        "name":"Yuvraj",

        "year":2000

    },

    "child3":{

        "name":"Suraj",

        "year":1999

    }

}

print(disc)



#nested

a1={

    "name":"a",

    "age":1

}

a2={

    "name":"b",

    "age":2

}

aa={

    "child1":a1,

    "child2":a2

}



print(aa)