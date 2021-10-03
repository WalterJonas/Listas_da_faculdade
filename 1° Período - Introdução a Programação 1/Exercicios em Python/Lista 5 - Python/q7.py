#Faça um algoritmo para ler o código e o preço de 15 produtos, calcular e escrever:
#a) o maior preço lido
#b) a média aritmética dos preços dos produtos

cod=int(input("CODIGO: "))
preco1=float(input("PREÇO: "))
maior=preco1
soma=0
for i in range(2):
    cod=int(input("CODIGO: "))
    preco=float(input("PREÇO: "))
    if preco>maior:
        maior=preco
    soma=soma+preco
media=(preco1+soma)/3
print("Maior preço: ", maior, "\nMedia: ", media)
    
    
    
