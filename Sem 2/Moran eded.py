#ESL
'''
n=int(input("eded: "))
def reqemcemi():
    temp=n
    cem=0
    while temp>0:
        cem=cem+temp%10
        temp//=10
    return cem
reqemcemi()
qismet = n / reqemcemi()
c=0
if qismet==n//reqemcemi():
    for i in range(2,n//reqemcemi()):
        if qismet%i==0:
            c+=1
    if c==0:
        print(n,"Moran ededdir")
    else :
        print(n,"eded Moran eded deyil")

'''
for n in range(1,200):
    def reqemcemi():
        temp=n
        cem=0
        while temp>0:
            cem=cem+temp%10
            temp//=10
        return cem
    reqemcemi()
    qismet = n / reqemcemi()
    c=0
    if qismet==n//reqemcemi():
        for i in range(2,n//reqemcemi()):
            if qismet%i==0:
                c+=1
        if c==0:
            print(n,"Moran ededdir")
        else :
            print(n,"eded Moran eded deyil")
