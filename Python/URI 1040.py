n1, n2, n3, n4 = map(float, input().split())

media= (2*n1+3*n2+4*n3+n4)/10

print("Media: %0.1f"%media)

if media >= 7.0:
    print("Aluno aprovado.")
elif media < 5.0:
    print("Aluno reprovado.")
elif media >= 5.0 and media < 7.0:
    print("Aluno em exame.")
    np3 = float(input())
    print("Nota do exame:",np3)
    media2 = (media+np3)/2
    if media2 >= 5.0:
        print ("Aluno aprovado.")
        print ("Media final: %0.1f"%media2)
    else:
        print ("Aluno reprovado.")
        print ("Media final: %0.1f"%media2)