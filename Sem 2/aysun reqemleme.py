N=int(input())
L=len(str(N))
A=[0]*L
for i in range (L):
    A[L-i-1]=N%10
    N//=10

def cem():
    S=0
    for i in range(L):
        S+=A[i]
        print(A[i],end="")
        if A[i]==A[L-1]:
            print("=",S,end="")
        else:
            print("+",end="")
    print("")

def hasil():
    H=1
    for i in range(L):
        H*=A[i]
        print(A[i],end="")
        if A[i]==A[L-1]:
            print("=",H,end="")
        else:
            print("*",end="")
    print("")

cem()
hasil()





            
