from random import*
N=int(input("say: "))
A=[int(input()) for o in range(N)]
print(A)
Max=A[0]
c=0
for i in range(N):
    if A[i]>Max:
        Max=A[i]
for i in range(N):
    for j in range(N):
        if A[i]==A[j] and A[i]==Max:
            c+=1
print(Max,"",c,"eded")
