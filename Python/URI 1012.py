a,b,c = map(float, input().split())

TRI = a*c/2
CIR = 3.14159*pow(c,2)
TRA = (a+b)*c/2
QUA = pow(b,2)
RET = a*b

print("TRIANGULO: %0.3f"%TRI)
print("CIRCULO: %0.3f"%CIR)
print("TRAPEZIO: %0.3f"%TRA)
print("QUADRADO: %0.3f"%QUA)
print("RETANGULO: %0.3f"%RET)