a=int(input("Hesenin yashi="))
b=int(input("Ceyhunun yashi="))
c=int(input("Orxanin yashi="))
if a==b>c :
    print ("Hesen ve Ceyhun ,Orxandan boyukdur")
elif a==c>b :
    print ("Hesen ve Orxan ,Ceyhundan boyukdur")
elif b==c>a :
    print ("Ceyhun ve Orxan ,Hesenden boyukdur")
elif a>b and a>c :
    print ("Hesen hamidan boyukdur")
elif b>a and b>c :
    print ("Ceyhun hamidan boyukdur")
elif c>a and c>b :
    print ("Orxan hamidan boyukdur")
elif a==b==c :
    print ("Yashlari beraberdirler")
