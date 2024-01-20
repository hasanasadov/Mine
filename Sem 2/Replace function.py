#replace
def replace():
    first=input("daxil edin: ")
    old=input("deyishmek istediyiniz hisseni daxil edin: ")
    new=input("yeni hisseni daxil edin: ")
    result=""
    for i in range(len(first)):
        if old==first[i:i+len(old)]:
            result=first[:i]+new+first[i+len(old):]
    return result
print(replace())
