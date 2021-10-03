#Faça um algoritmo que leia um número inteiro e calcule o seu fatorial. Se o número for negativo,
#informe que o valor é inválido.

x=int(input("N: "))
i=1
n_fat=1

if x<0:
    print("Número inválido!")
else:
    while i<=x:
        n_fat=n_fat*i
        i=i+1
    print("Fatorial: ", n_fat)
    
