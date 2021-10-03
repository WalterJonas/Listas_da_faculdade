#Faça um Programa que leia três números
#inteiros, em seguida mostre o maior e o menor deles.

a=int(input("Insira um número: "))
b=int(input("Insira um número: "))
c=int(input("Insira um número: "))
if a>b and b>c:
    print("Maior: ", a, "\nMenor: ", c)
elif b>c and c>a:
    print("Maior: ", b, "\nMenor: ", a)
elif c>b and  b>a:
    print("Maior: ", c, "\nMenor: ", a)
elif b>a and  a>c:
    print("Maior: ", b, "\nMenor: ", c)
elif a>c and c>b:
    print("Maior: ", a, "\nMenor: ", b)
elif c>a and a>b:
    print("Maior: ", c, "\nMenor: ", b)
