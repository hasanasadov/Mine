from random import*
N=int(input("say: "))
A=[randint(0,20) for o in range(N)]
print(A)
Max=A[0]
for i in range(N):
    if A[i] >Max:
        Max=A[i]
print(Max)
