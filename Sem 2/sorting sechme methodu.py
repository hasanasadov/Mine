from random import*
N=int(input("say: "))
A=[randint(10,20) for i in range(N)]
print(A)
for i in range(N-1):
    nmin=i
    for j in range(i+1,N):
        if A[j]<A[nmin]:
            nmin=j
    if i!=nmin:
        A[i],A[nmin]=A[nmin],A[i]
print(A)
