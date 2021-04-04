nome = str(input())
SF = float(input()) #salario fixo
VNDS = float(input()) #valor de vendas

total = SF + 0.15*VNDS

print("TOTAL = R$ %0.2f"%total)