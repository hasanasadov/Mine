from random import*
N=int(input("say"))
A=[ randint(0,10) for x in range(N) ]
print(A)
M=A[0]
c=0
for i in range(1,N):
    if A[i]>M:
        M=A[i]
print(M)

for k in range(1,N):
    if A[k]==M:
        c+=1
print(c)
