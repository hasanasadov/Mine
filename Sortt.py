from random import*
N=int(input("say: "))
A=[randint(10,30) for i in range(N)]
print(A)
#qsort
'''
def qsort(A,ns,ne):
    if ns>=ne: return
    L=ns
    R=ne
    X=A[(L+R)//2]
    while L<=R:
        while A[L]<X: L+=1
        while A[R]>X: R-=1
        if L<=R:
            A[L],A[R]=A[R],A[L]
            L+=1
            R-=1
    qsort(A,ns,R)
    qsort(A,L,ne)
qsort(A,0,N-1)
'''
#buble
'''
for i in range(N):
    for j in range(N-2,i-1,-1):
        if A[j]>A[j+1]:
            A[j],A[j+1]=A[j+1],A[j]
'''

#dash
'''
for i in range(N-1):
    for j in range(N-1):
        if A[j+1]<A[j]:
            A[j+1],A[j]=A[j],A[j+1]
'''
#sechme
'''
for i in range(N-1):
    nmin=i
    for j in range(i+1,N):
        if A[j] < A[nmin]:
            nmin=j
    if i!=nmin:
        A[i],A[nmin]=A[nmin],A[i]
'''
#qsort2
'''
def qS (A):
  if len(A) <= 1: return A		
  X = A[2]  			
  B1 = [ b for b in A if b<X]
  BX = [ b for b in A if b==X]	
  B2 = [ b for b in A if b>X]		
  return qS(B1) + BX + qS(B2)	
print(qS(A))
'''


#binary search
'''
L=0
R=N
X=int(input("daxil edin :"))
while L<R-1:
    c=(L+R)//2
    if X < A[c]:
        R=c
    else: L=c
if A[L]==X:
    print(L)
'''




















