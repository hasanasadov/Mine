from random import randint
from random import choice
N=int(input("say: "))
a=[randint(1,20) for i in range(N)]
print(a)

def qsortt(a):
    if N <= 1 : return a
    X=random.choice(a)
    print(X)
    B1 = [ b for b in a if b < X ]
    BX = [ b for b in a if b==X ]
    B2 = [ b for b in a if b > X ]
    print(qsortt(B1) + BX + qsortt(B2))
qsortt(a)
FFFFFFFAAAAAAAAAAIIIIIIIILLLLLLLEEEEEEEDDDDDDDDDDD
FAILL
