#reqemler cemi
'''
x=int(input("ededi daxil et"))
def sumdigit():
    s=0
    t=x
    while t>0:
        s=s+t%10
        t//=10
    print (s)
'''

#bubble usulu
'''
from random import*
N=int(input("say"))
A=[randint(0,12) for q in range(N)]
print(A)
def sort1():
    for i in range(N-1):
        for j in range(N-2,i-1,-1):
            if A[j+1]<A[j] :
                A[j+1],A[j]=A[j],A[j+1]
    print(A)


def sort2():
    for i in range(N-1):
        for j in range(N-1):
            if A[j]>A[j+1]:
                A[j],A[j+1]=A[j+1],A[j]
    print(A)
'''

#minimumla sort
'''
from random import*
N=int(input("say"))
A=[randint(0,12) for q in range(N)]
print(A)
def minsort():
    for i in range(N-1):
        nMin=i
        for f in range(i+1,N):
            if A[f]<A[nMin]:
                nMin=f
        if i!=nMin:
            A[i],A[nMin]=A[nMin],A[i]
    print("sorted list",A)
minsort()
'''

#ferqli eded tapma
'''
def ferqlieded():
    minsort()
    c=0
    for w in range(N-1):
        if A[w]!=A[w+1]:
            c+=1
    print(A[w])
ferqlieded()
'''

#secme (yaridan ayirma)
'''
from random import*
N=int(input("say"))
A=[randint(0,12) for q in range(N)]
print(A)
def secmesort():
    for i in range(N//2-1):
        nMin=i
        for f in range(i+1,N//2):
            if A[f]<A[nMin]:
                nMin=f
        if i!=nMin:
            A[i],A[nMin]=A[nMin],A[i]
    for i in range(N//2,N-1):
        nMax=i
        for f in range(i+1,N):
            if A[f]>A[nMax]:
                nMax=f
        if i!=nMax:
            A[i],A[nMax]=A[nMax],A[i]
    print(A)
secmesort()
'''
