#Escreva um programa que receba dois números e um sinal. 
#Calcule e mostre resultado de acordo com a operação matemática definida pelo sinal. 
#“+” Soma, “-” Subtração, “*” Multiplicação e “/” Divisão.

x=float(input("Insira um numero"))
y=float(input("Insira um numero"))
sinal=input("Insira um sinal: ")
if sinal=="+":
    soma=x+y
    print("SOMA: ", soma)
elif sinal=="-":
    sub=x-y
    print("SUBTRAÇÃO: ", sub)
elif sinal=="*":
    mult=x*y
    print("MULTIPLICAÇÃO: ", mult)
elif sinal=="/":
    div=x/y
    print("DIVISÃO: ", div)
input()
