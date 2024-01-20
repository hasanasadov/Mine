from random import*
n=int(input("say"))
a=[randint(-100,100) for i in range(n)]
print(a)
count=0
b=[]
for x in a:
    for i in range(2,n):
        if x%i==0 :
            count+=1
    if count==0:
        b.append(x)
print(b)
