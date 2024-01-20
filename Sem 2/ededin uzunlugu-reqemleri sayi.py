n=int(input("eded: "))
if n>0:
    temp=n
else:
    temp=-n
count=0
while temp>0:
    temp=temp//10
    count+=1
print(n,"",count,"reqemli ededdir")
