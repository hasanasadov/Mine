#Homework 4


#Task A
'''
a=int(input("ededi daxil edin: "))
A=[a]
while a!=1:
    if a%2==0:
        a=a/2
        A=A+[int(a)]
    else:
        a=a*3+1
        A=A+[int(a)]
print(A)

Max=A[0]
for i in range(len(A)):
    if Max<A[i]:
        Max=A[i]
print(Max)
'''
#Task B
'''
n=int(input("ededi daxil edin: "))
def poly():
    t=n
    while t>0:
        if t%len(str(t))==0:
            t=t//10
        else :
            return False
            break
    if t==0:
        return True
print(poly())
'''

#Task C
'''
n=int(input("ededi daxil edin: "))
t=n
w="invalid"
def reqemlilik():
    if len(str(n))%2==0:
        return t
    else:
        return w

if reqemlilik()==n:
    r=str(t)
    A=[]
    for i in range(0,len(r),2):
        s=r[i:i+2]
        A=A+[int(s)]
    for i in range(len(A)):
        q=A[i]
        count=q//10
        for e in range(count):
            print(q%10,end="")
else:
    print(w)
'''

#Task D
'''
n=int(input("ededi daxil edin: "))

def polindrom (n) :
    cem=0
    temp=n
    while temp>0:
        a=temp%10
        cem=cem*10+a
        temp=temp//10
    if n==cem:
        return True
    else:
        return False

def inttobinar(n):
    result=""
    tem=n
    while tem>0:
        q=tem%2
        tem//=2
        result=str(q)+result
    result=int(result)
    return result

if polindrom(inttobinar(n))==True and polindrom(n)==True:
    print("Polindrom type is Decimal and Binary")
elif polindrom(inttobinar(n))==True and polindrom(n)==False:
    print("Polindrom type is Binary")
elif polindrom(inttobinar(n))==False and polindrom(n)==True :
    print("Polindrom type is Decimal ")
elif polindrom(inttobinar(n))==False and polindrom(n)==Fasle:
    print("Polindrom type is neither Decimal and Binary")
'''

#Task E
'''
n=int(input("ededi daxil edin: "))
s=0

summ1=0
temp1=n
while temp1>0:
    summ1=summ1+temp1%10
    temp1//=10
print("Sum of digital roots of",n,"= ",summ1)

print("Prime factors: ",end="")
for i in range(2,n):
    if n%i==0:
        print(i,"",end="")
        s=s+i
print()

print("Sum of prime  factors= ",s)

summ2=0
temp2=s
while temp2>0:
    summ2=summ2+temp2%10
    temp2//=10
print("Sum of digital roots of",s,"= ",summ2)

if summ1==summ2:
    print("The Number - ",n,"is a Smith number")
else:
    print("The Number - ",n,"is not a Smith number")
'''








