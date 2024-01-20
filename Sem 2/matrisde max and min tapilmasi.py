#matrisde max ve min tapilma
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
M=a[0][0]
for x in range(n):
    for y in range(m):
        if a[x][y]>M :
            M=a[x][y]
            t=x
            h=y
            break
print("a[",t,",",h,"]=",M,sep="")
