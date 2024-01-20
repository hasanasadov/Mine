from random import*
n=int(input("say"))
a=[randint(-100,100) for i in range(n)]
print(a)
b=[x for x in a 
   if x%2==0 and x<0]
print(b)
