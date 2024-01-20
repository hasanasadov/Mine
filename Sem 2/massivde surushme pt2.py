from random import*
n=int(input("say"))
a=[randint(0,20) for i in range(n)]
print(a)
c=a[n-1]
for i in range(n-2,-1,-1):
    a[i+1]=a[i]
a[0]=c
print(a)
