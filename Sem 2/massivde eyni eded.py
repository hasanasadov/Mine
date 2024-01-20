from random import*
N=int(input("say: "))
A=[randint(0,20) for o in range(N)]
print(A)
c=0
for i in range(N):
    for j in range(i+1,N):
        if A[i]==A[j]:
            print(A[i])
            c+=1
if c==0:
    print("tapilmadi")
        
