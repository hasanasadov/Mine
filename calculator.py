def helpp():
    print("for - press '-'")
    print("for + press '+'")
    print("for * press '*'")
    print("for / press '/'")
    
def get_int():
    return int(input("daxil et"))

def calc():
    a=get_int()
    b=get_int()
    c=input("press")
    if c=="-" :
        print(a,"-",b,"=",a-b,sep="")
    if c=="+":
        print(a,"+",b,"=",a+b,sep="")
    if c=="*" :
        print(a,"*",b,"=",a*b,sep="")
    if c=="/" :
        print(a,"/",b,"=",a/b,sep="")
helpp()
calc()
