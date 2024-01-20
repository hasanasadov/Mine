from random import*
N=int(input("sayimi daxil et"))
A=[randint(0,20) for p in range(N)]
print(A)

def qsort(A,ns,ne):
    if ns >= ne:
        return
    L=ns ; R=ne
    X=A[(L+R)//2]
    while L<=R :
        while A[L]<X:
            L+=1
        while A[R]>X:
            R-=1
        if L<=R:
            A[L],A[R]=A[R],A[L]
            L+=1
            R-=1
    qsort(A,ns,R)
    qsort(A,L,ne)

qsort(A,0,N-1)
print(A)


Y=int(input("axtardigin ededi daxil et"))
def findsorteddigit():
    sol=0;sag=N
    while A[sol] < A[sag-1] :
        c=(sol+sag)//2
        if Y< A[c]:
            sag=c
        else :
            sol=c
    if A[sol]==Y:
        print( "A[",sol,"]=",Y,sep="")
    else:
        print("tapilmadi")
findsorteddigit()


def findsamedigit():
    count=1
    for i in range(N-1):
        if A[i]==A[i+1]==Y:
            count+=1
    print(count,"defe tekrarlanir")
findsamedigit()
