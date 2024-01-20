#Task A
'''
a=int(input("daxil edin: "))
A=[]
while  a!="":
    if int(a)>=0:
        A=A+[int(a)]
        a=input("daxil edin: ")
    else:
        a=input("daxil edin: ")
print(A)
B=sorted(A)
print(B)
C=[]
n=int(input("say:"))
for i in range(n,len(B)-n):
    C=C+[int(B[i])]
print(C)
'''


#Task B
'''
from random import*
N=int(input("row and col:  "))
A=[]
for i in range(N):
    A.append([0]*N)
for row in range(N):
    for col in range(N):
        A[row][col]=randint(10,30)
        print("{:4d}".format(A[row][col]),end="")
    print()
soldia=[]
solcem=0
for i in range(N):
    soldia+=[int(A[i][i])]
    solcem+=A[i][i]
print(soldia,"=",solcem)

sagdia=[]
sagcem=0
for i in range(N):
    sagdia+=[int(A[i][N-1-i])]
    sagcem+=A[i][N-1-i]
print(sagdia,"=",sagcem)

if sagcem>solcem:
    print("right is greater")
elif sagcem<solcem:
    print("left is greater")
elif sagcem==solcem:
    print("right and left are equal")
'''


#Task C
'''
n=input("daxil et: ")
A=[]
while n!="":
    A=A+[int(n)]
    n=input("daxil et: ")
print(A)

summ=0
for i in range(len(A)):
    summ+=A[i]
ave=summ/len(A)
print(summ,"/",len(A),"=",ave)

print("higher than average: ",end="" )
for i in range(len(A)):
    if A[i]>ave:
        print(A[i],end=" ")
print()
print("less than average: ",end="" )
for i in range(len(A)):
    if A[i]<ave:
        print(A[i],end=" ")
'''


#Task D
'''
n=input("daxil et: ")
A=[]
while n!="":
    A=A+[int(n)]
    n=input("daxil et: ")
print(A)

B=A[:]
for i in range(len(B)):
    for j in range(len(B)-2,i-1,-1):
        if B[j]>B[j+1]:
            B[j],B[j+1]=B[j+1],B[j]

C=A[:]
for i in range(len(C)):
    for j in range(len(C)-2,i-1,-1):
        if C[j]<C[j+1]:
            C[j],C[j+1]=C[j+1],C[j]

if A==B:
    print("list is ascendingly sorted")
elif A==C:
    print("list is decendingly sorted")
elif A!=B and A!=C:
    print("list is unsorted")
'''

#Task E
'''
from random import*
A=[randint(0,5) for i in range(3)]
B=[randint(0,5) for i in range(3)]
C=[b*b for b in B]
D=[]
print("X cordinates :",A)
print("Y cordinates :",B)
def c(A):
    s=0
    for i in range(len(A)):
        s+=A[i]
    return s

for i in range(3):
    D=D+[int(A[i]*B[i])]

m=(c(D)-(c(A)*c(B))/len(A))/(c(C)-c(A)*c(A)/len(A))
b=c(B)/len(B) - m*(c(A)/len(A))

print("f(x)= ",m,"x","+",b)
'''

















