from random import*
N=int(input("say: "))
A=[randint(0,15) for i in range(N)]
print(A)
for i in range(N-1):
    if A[i]==A[i+1]:
        print(A[i])
