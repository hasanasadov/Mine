#creating matris
from random import*
n=int(input("n: "))
m=int(input("m: "))
a=[]
for i in range(n):
    a=a+[[0]*m]
    for j in range(m):
        a[i][j]=randint(0,99)
        print("{:4d}".format(a[i][j]),end="")
    print()
