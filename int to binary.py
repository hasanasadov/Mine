n=int(input("ededi daxil edin: "))
def inttobinar(n):
    result=""
    tem=n
    while tem>0:
        q=tem%2
        tem//=2
        result=str(q)+result
    result=int(result)
    return result
print(inttobinar(n))


