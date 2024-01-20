a=int(input("a"))
b=int(input("b"))
count1=0
count2=0
for i in range(a,(b+1)):
    if i!=0 and i%2==0:
       count1 += 1
    elif i!=0 :
       count2 += 1
print ("cutlerin sayi",count1)
print ("teklerin sayi",count2)


