#Faça um algoritmo que leia do usuário cinco números. Se os valores forem diferentes identifique e
#imprima o maior e o menor valor.

x=int(input("Insira o número: "))
maior=x
menor=x
for i in range(4):
    x=int(input("Insira o número: "))
    if x>maior:
        maior=x
    else:
        if x<menor:
            menor=x
print("Maior: ", maior, "\nMenor: ", menor)
        
        
