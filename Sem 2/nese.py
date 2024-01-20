n=input("eded n: ")
p=input("eded p: ")
a=int(n[0])
b=int(n[1])
c=int(n[2])
print(a,b,c)
k=(a*a+b*b+c*c*c)/n
print(k)
10.n – tam ededini ve p-natural ededini qebul edib k ededini cap eden funksiya
yazin.
a, b, c, d (soldan saga) - n tam ededinin reqemleri
(a ^ p + b ^ (p+1) + c ^(p+2) + d ^ (p+3) + ... ) = n* k
Numune (n,p->k): 89,1->1, 92,1->None, 695,2->2
