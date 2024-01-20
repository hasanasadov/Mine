#nese
'''
N=5
A=[0]*N
for i in range (N):
    print("[A",i,"]=",sep="",end="")
    A[i]=int(input())
print(A)
'''

#daha rahat
'''
N=int(input("sayi daxil et"))
A=[ int(input("ededi daxil et")) for i in range(N) ]
print(A)
'''

#zorzor
'''
data=input()
s=data.split()
A=[ int(x) for x in s]
print(A)
'''





