n=int(input("eded: "))
def sade(n):
    c=0
    for i in range(2,n):
        if n%i==0:
            c+=1
    if c==0:
        return True

def hyper():
    q="hiper sade deyil"
    w="hiper sadedir"
    temp=n
    while temp>1:
        if sade(temp)==True :
            temp//=10
        
    if temp==0 :
        return w
    else:
        return q

print(hyper())
