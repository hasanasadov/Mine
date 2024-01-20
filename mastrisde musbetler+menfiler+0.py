from random import*
n=int(input("say"))
a=[randint(-100,100) for i in range(n)]
print(a)
c=0
d=0
for i in range(n):
    for j in range(n-2,i-1,-1):
        if a[j]<a[j+1]:
            a[j],a[j+1]=a[j+1],a[j]
for i in range(n):
    if a[i]>0:
        c+=1
    else :
        d+=1
print(c,"dene musbet")
print(d,"dene musbet olmayan eded var")
