#Faça um algoritmo que receba três números e armazene-os em três variáveis com os seguintes
#nomes: maior, intermediário e menor. Depois imprima na tela os valores.

x=int(input("Insira o número: "))
y=int(input("Insira o número: "))
z=int(input("Insira o número: "))
if x>y and y>z:
    print("Maior: ", x, "\nIntermediário: ", y, "\nMenor: ", z)
elif y>z and z>x:
    print("Maior: ", y, "\nIntermediário: ", z, "\nMenor: ", x)
elif z>y and y>x:
    print("Maior: ", z, "\nIntermediário: ", y, "\nMenor: ", x) 
elif y>x and x>z:
    print("Maior: ", y, "\nIntermediário: ", x, "\nMenor: ", z)
elif x>z and z>y:
    print("Maior: ", x, "\nIntermediário: ", z, "\nMenor: ", y)
elif z>x and x>y:
    print("Maior: ", z, "\nIntermediário: ", x, "\nMenor: ", y)
