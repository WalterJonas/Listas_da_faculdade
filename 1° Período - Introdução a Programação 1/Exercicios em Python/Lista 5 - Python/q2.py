#Faça um algoritmo que receba N número inteiros e conte quantos são números pares e quantos são
#ímpares. No final, imprima o resultado.

par=0
impar=0
for i in range(5):
    x=int(input("Insira o número: "))
    if x%2==0:
        par=par+1
    else:
        impar=impar+1
print("Quantidade de pares: ", par, "\nQuantidade de impares: ", impar)
        
