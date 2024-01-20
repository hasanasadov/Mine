a=int(input("1-ci ededi daxil et "))
b=int(input("2-ci ededi daxil et "))
def EBK(a,b):
    if a>b:
        min=b
    else :
        min=a
    for i in range(1,min+1):
        if a%i==0 and b%i==0:
            ebob=i
    ekob=(a*b)/ebob
    ekob=int(ekob)
    return ebob,ekob
print (EBK(a,b))










