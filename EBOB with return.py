a=int(input("A"))
b=int(input("B"))
def ebob(a,b):
    if a==0 or b==0 :
        return a+b;
    if a>b :
        return ebob(a-b,b)
    else :
        return ebob(a,b-a)
print(ebob(a,b))
