T = int(input()) #tempo gasto
G = int(input()) #combustivel gasto

DIST = T*G #distancia total
CON = DIST/12 #calculo dos km/l

print("%0.3f"%CON)