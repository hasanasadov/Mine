a=input("ayin adini daxil edin : ")
b=int(input("Gunun nomresini daxil edin : "))
if a=="yanvar" or a=="fevral" :
    print ("winter")
elif a=="mart":
    if b<20 :
        print ("Winter")
    else :
        print ("Spring")
elif a=="aprel" or a=="may":
    print ("Summer")
elif a=="iyun":
    if b<21 :
        print ("Spring")
    else :
        print ("Summer")
elif a=="iyul" or a=="avqust" :
    print ("Summer")
elif a=="sentyabr":
    if b<22 :
        print ("Summer")
    else :
        print ("Fall")
elif a=="oktyabr" or a=="noyabr":
    print ("Fall")
elif a=="dekabr" :
    if b<21 :
        print ("Fall")
    else :
        print("Winter")
