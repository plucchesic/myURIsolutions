import math
x = float(0)
while x==0:
    L,C,R1,R2 = map(float, input().split())
    X2 = float(C-R2)
    Y2 = float(L-R2)
    D1 = float(2*R1)
    D2 = float(2*R2)
    DIST = float(math.sqrt(math.pow(X2-R1,2)+math.pow(Y2-R1,2)))
    MD = (D1 + D2 + abs(D1 - D2))/2
    MnL = (L + C - abs(L-C))/2
    if L==0 and C==0 and R1==0 and R2==0:
        X=1
        break
    if DIST >= R1+R2 and MD <= MnL:
        print("S")
    else:
        print("N")