a=input("Enter name of the month: ")
b=input("Enter the day: ")
if a=="yanvar":
    a=1
elif a=="fevral":
    a=2
elif a=="mart":
    a=3
elif a=="aprel":
    a=4
elif a=="may":
    a=5
elif a=="iyun":
    a=6
elif a=="iyul":
    a=7
elif a=="avqust":
    a=8
elif a=="sentyabr":
    a=9
elif a=="oktyabr":
    a=10
elif a=="noyabr":
    a=11
elif a=="dekabr":
    a=12
elif (a>=3 and b>=20) and (a<=6 and b<21):
    print ("Spring")
elif (a>=6 and b>=21) and (a<=9 and b<22):
    print ("Summer")
elif (a>=9 and b>=22) and (a<=12 and b<21):
    print ("Fall")
elif (a>=12 and b>=21) or (a>=1 and a<=3 and b<20):
    print ("Winter")
