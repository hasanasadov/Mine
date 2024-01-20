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

Y=[[0]*N for i in range(N)]
for i in range(N):
    for j in range(M):
        c=A[i][j]
        Y[j][N-i-1]=c
    

for a in range(N):
    for b in range(M):
        c=Y[a][b]
        print("{:4d}".format(Y[a][b]),end="")
    print()
