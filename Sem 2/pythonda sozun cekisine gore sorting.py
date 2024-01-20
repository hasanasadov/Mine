#pythonda sozun cekisine gore sorting 
aS=[]
print("daxil edin: ")
while True:
    s1=input()
    if s1 =="": break
    aS=aS+[s1]
print(aS)
for i in range(len(aS)-1):
    for j in range(len(aS)-2,i-1,-1):
        if aS[j]>aS[j+1]:
            aS[j],aS[j+1]=aS[j+1],aS[j]
print(aS)
