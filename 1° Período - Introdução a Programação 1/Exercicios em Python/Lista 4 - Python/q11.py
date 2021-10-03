#Faça um programa que pergunte o preço de três produtos e informe qual produto você deve
#comprar, sabendo que a decisão é sempre pelo mais barato.

a=float(input("Qual o preço do produto 1 ?: "))
b=float(input("Qual o preço do produto 2 ?: "))
c=float(input("Qual o preço do produto 3 ?: "))

if a>b and  b>c:
    print("Você deve comprar o produto 3")
elif b>c and  c>a:
    print("Você deve comprar o produto 1")
elif c>b and  b>a:
    print("Você deve comprar o produto 1") 
elif b>a and  a>c:
    print("Você deve comprar o produto 3")
elif a>c and  c>b:
    print("Você deve comprar o produto 2")
elif c>a and  a>b:
    print("Você deve comprar o produto 2")



