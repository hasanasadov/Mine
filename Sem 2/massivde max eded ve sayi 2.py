from random import*
n=int(input("say"))
a=[randint(0,20) for i in range(n)]
print(a)
c=1
def MAX():
    MAX=a[0]
    for q in range(n):
        if a[q]>MAX:
            MAX=a[q]
    return MAX
for i in range(n):
    for j in range(i+1,n):
        if a[i]==a[j]==MAX():
            c+=1
print("max=",MAX())
print("sayi=",c)
