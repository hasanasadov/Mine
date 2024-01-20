from random import*
N=int(input("say: "))
A=[randint(0,20) for o in range(N)]
print(A)
Max=A[0]
Min=A[0]
nMax=0
nMin=0
for i in range(N):
    if A[i] >Max:
        Max=A[i]
        nMax=i
for q in range(N):
    for w in range(q+1,N):
        if A[q]==A[w]==Max:
            print("A[",q,"]=","A[",w,"]=",Max,sep="")
print("A[",nMax,"]=",Max,sep="")
for j in range(N):
    if A[j] < Min:
        Min=A[j]
        nMin=j
print("A[",nMin,"]=",Min,sep="")

                
