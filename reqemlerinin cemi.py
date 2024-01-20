n=int(input())
def di(n):
    summ = n%10
    if n>=10:
        summ = summ + di(n//10)
    return(summ)
print(di(n))
