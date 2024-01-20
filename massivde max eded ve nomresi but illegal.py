from random import*
N=int(input("say: "))
A=[randint(0,20) for o in range(N)]
print(A)
M=max(A)
nMax=A.index(M)
print("A[",nMax,"]=",M,sep="")
