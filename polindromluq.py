a=int(input("daxil ele"))
temp=a
c=0
while temp>0:
    b=a%10
    temp=temp//10
    c=c*10+b
if a==c:
    print("eded polindromdur")
else :
    print("eded polindrom deyil")
