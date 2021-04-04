a,b,c = map(int, input().split())
if a>b and a>c:
    if b>c:
        print(c)
        print(b)
        print(a)
    else:
        print(b)
        print(c)
        print(a)
if b>a and b>c:
    if a>c:
        print (c)
        print (a)
        print (b)
    else:
        print(a)
        print(c)
        print(b)
if c>a and c>b:
    if a>b:
        print(b)
        print(a)
        print(c)
    else:
        print(a)
        print(b)
        print(c)
print("")
print(a)
print(b)
print(c)
