n=input("Enter the age of guest : ")
s=0
while n!=" " :
    n=int(n)
    if n<=2 :
        s+=0
    elif n>3 and n<12 :
        s=s+14
    elif n>=65 :
        s=s+18
    else :
        s=s+23
    n=input("Enter the age of guest : ")
print (s)
