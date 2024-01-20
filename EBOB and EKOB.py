a=int(input("a="))
b=int(input("b="))
if a>b :
    kicikeded=b
else :
    kicikeded=a

for i in range(1,kicikeded+1):
        if a%i==0 and b%i==0:
            ebob=i
print ("ebob=",ebob)
print ("ekob=",a*b//ebob)
