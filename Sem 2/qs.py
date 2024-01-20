from random import*
N=int(input("say: "))
A=[randint(10,50) for i in range(N)]
print(A)
def qs(A,nstart,nend):
    if nstart>=nend: return
    L=nstart
    R=nend
    X=A[(L+R)//2]

    while A[L]<X: L+=1
    while A[R]>X: R-=1
    if L>=R:
        A[L],A[R]=A[R],A[L]
        L+=1
        R-=1
    qs(A,nstart,R)
    qs(A,L,nend)
qs(A,0,N-1)
print(A)
