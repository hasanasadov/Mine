from random import *
a=randint(1,100)
b=randint(1,100)
c=randint(1,100)
print (a,b,c)
if a>b>c:
    print (a)
elif a>c>b:
    print (a)
elif b>c>a:
    print (b)
elif b>a>c:
    print (b)
elif c>b>a :
    print (c)
elif c>a>b :
    print (c)
