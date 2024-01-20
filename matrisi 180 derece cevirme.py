from random import*
N=int(input("row: "))
M=int(input("col: "))
A=[]
i=1
for a in range(N):
    A=A+[[0]*M]
    for b in range(M):
        A[a][b]=i
        i+=1
        print("{:4d}".format(A[a][b]),end="")
    print()

for q in range(N//2):
    A[q][:],A[N-q-1][:]=A[N-q-1][:],A[q][:]


for a in range(N):
    for b in range(M):
        print("{:4d}".format(A[a][b]),end="")
    print()
