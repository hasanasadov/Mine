n=int(input())

def di(n):
    hasil=1
    if n>=1:
        hasil = hasil * di(n-1)
        
    return(hasil)
print(di(n))
