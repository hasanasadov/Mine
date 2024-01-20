'''
a=0
b=0
for i in range(1000):
    a=a+4/((i*2+2)*(i*2+3)*(i*2+4))
    b=b+4/((i*2+4)*(i*2+5)*(i*2+6))
print(3+a-b)
'''

mypi=3
x=0
for i in range(15):
    x=x+(-1)**i*(mypi+4/((i*2+2)*(i*2+3)*(i*2+4)))
print(x)
