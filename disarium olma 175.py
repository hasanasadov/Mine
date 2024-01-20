n=int(input("ededidaxil edin: "))
def reqemsayi():
    if n>0:
        temp=n
    else:
        temp=-n
    count=0
    while temp>0:
        temp=temp//10
        count+=1
    return count

temp2=n
cem=0
for i in range(reqemsayi(),0,-1):
    cem=cem+(temp2%10)**i
    temp2=temp2//10
if n==cem:
    print(n,"disarium ededdir")
else:
    print(n,"disarium eded deyil")
