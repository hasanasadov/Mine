from random import*
n=int(input("say"))
a=[randint(0,20) for i in range(n)]
print(a)
c=a[0]
for i in range(n-1):
    a[i]=a[i+1]
a[n-1]=c
print(a)
