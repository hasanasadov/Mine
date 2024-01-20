a=int(input("a="))
b=int(input("b="))
c=int(input("c="))
if (a==b or a==c ) or (b==c or b==a) or (c==a or c==b):
    print ("iki eded eynidir")
elif a==b==c :
    print ("3 eyni eded var")
else :
    print ("eyni eded yoxdur")
    

