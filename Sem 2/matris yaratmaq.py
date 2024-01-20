from random import*
n=int(input("n: "))
m=int(input("m: "))
a=[]
s=0
for i in range(n):
    a=a+[[0]*m]
    for j in range(m):
        a[i][j]=randint(0,20)
        print("{:4d}".format(a[i][j]),end="")
        s+=a[i][j]
    print()


op=s/(m*n)
print("orta parlaqliq",op)
for i in range(n):
    for j in range(m):
        if a[i][j]>=op:
            a[i][j]=255
        else:
            a[i][j]=0

for i in range(n):
    for j in range(m):
        print("{:4d}".format(a[i][j]),end="")
    print()
        
