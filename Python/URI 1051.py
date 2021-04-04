V = float(input())
if V>=0 and V<=2000:
    print ("Isento")
elif V>2000 and V<=3000:
    ID = 0.08*(V-2000) #ID: Imposto Devido. V: Valor do salário.
    print("R$ %0.2f"%ID)
elif V>3000 and V<=4500:
    ID = 0.18*(V-3000)+80
    print("R$ %0.2f"%ID)
elif V > 4500:
    ID = 0.28*(V-4500)+350
    print("R$ %0.2f"%ID)
