import math

x1,y1 = map(float, input().split())
x2,y2 = map(float, input().split())

DIF1 = math.pow(x2-x1,2)
DIF2 = math.pow(y2-y1,2)

distTt = math.sqrt(DIF1+DIF2)

print("%0.4f"%distTt)