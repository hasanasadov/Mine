from random import *
a=randint(1000,10000)
print (a)
temp=a
hasil=1
while temp>0:
    b=temp%10
    hasil=hasil*b
    temp//=10
print (hasil)

