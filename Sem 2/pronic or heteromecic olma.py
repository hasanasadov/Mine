def test():
    p=int(input("a"))
    for i in range(1,p):
        for q in range(1,p):
            if i==q*(q+1):
                print(i)
    print("bitti")
test()
