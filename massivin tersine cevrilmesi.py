from random import*
n=int(input("say"))
a=[randint(0,20) for i in range(n)]
print(a)
for i in range(n//2):
    a[i],a[n-1-i]=a[n-1-i],a[i]
print("ters a =",a)

'''
a=a[::-1]
print(a)
