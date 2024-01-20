from random import*
N=int(input("say"))
A=[randint(0,20) for i in range(N)]
print(A)
for i in range(N):
    for j in range(N-2,i-1,-1):
        if A[j]>A[j+1]:
            A[j],A[j+1]=A[j+1],A[j]
print(A)
c=1
for i in range(N-1):
    if A[i]!=A[i+1]:
        c+=1
print("ferqli eded sayi= ",c)
