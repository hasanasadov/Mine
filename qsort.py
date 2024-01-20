from random import*
N=int(input("say: "))
a=[randint(1,20) for i in range(N)]
print(a)
def qsort(a,nstart,nend):
    if nstart >= nend: return
    L=nstart
    R=nend
    X=a[(L+R)//2]
    while L <= R:
        while a[L] < X : L+=1
        while a[R] > X : R-=1
        if L<=R:
            a[L],a[R]=a[R],a[L]
            L+=1
            R-=1
    qsort(a,nstart,R)
    qsort(a,L,nend)
    return a
print(qsort(a,0,N-1))
