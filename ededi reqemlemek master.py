a=int(input("daxil ele"))
def reqemlemek(a):
    temp=a
    c=0
    while temp>0:
        b=temp%10
        temp=temp//10
        c=c*10+b
    while c>0:
        d=c%10
        c//=10
        print(d)
reqemlemek(a)
