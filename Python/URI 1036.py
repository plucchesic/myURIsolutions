import math
a,b,c = map(float,input().split())
delta = math.pow(b,2)-4*a*c
if delta>=0 and a!=0:
    X1 = (-b+math.sqrt(delta))/(2*a)
    X2 = (-b-math.sqrt(delta))/(2*a)
    print("R1 = %0.5f"%X1)
    print("R2 = %0.5f"%X2)
elif delta<0 or a==0:
    print("Impossivel calcular")