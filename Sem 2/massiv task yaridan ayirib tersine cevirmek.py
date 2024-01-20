from random import*
n=int(input("say"))
a=[randint(0,20) for i in range(n)]
print(a)
b=a[:n//2]
c=a[n//2:]
b=b[::-1]
c=c[::-1]
print(b+c)
    
