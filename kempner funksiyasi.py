a=int(input("eded: "))
def fakt(q):
    hasil=1
    for i in range(1,q+1):
        hasil=hasil*i
    return hasil
def kempner():
    for w in range(a+1):
        for q in range(a+1):
            if fakt(q) % a ==0:
                return q
print(kempner())
