n=int(input())
def fakt(n):
    h=n
    if n>=2:
        h = h * fakt(n-1)
    return(h)
print(fakt(n))
