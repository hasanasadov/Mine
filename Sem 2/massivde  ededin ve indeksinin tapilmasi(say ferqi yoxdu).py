from random import*
n=int(input("say"))
a=[randint(0,20) for i in range(n)]
print(a)
x=int(input("axtarilan eded: "))
for i in range(n):
    if a[i]==x:
        print("A[",i,"]=",x,sep="")
