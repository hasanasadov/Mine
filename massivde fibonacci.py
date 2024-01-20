from random import*
n=int(input("say"))
a=[randint(0,100) for i in range(n)]
print(a)
def ilkeded():
    temp=a[j]
    while temp>0:
        temp=temp//10
        return temp
for i in range(n):
    for j in range(i+1,n):
        if a[i]%10==ilkeded():
            print(a[i],a[j])

