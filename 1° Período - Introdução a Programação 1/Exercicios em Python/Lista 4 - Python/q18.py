#As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem
#compradas pelo menos 12. Escreva um programa que leia o número de maçãs compradas, calcule e escreva o
#custo total da compra.

n=int(input("Insira o número de maçãs compradas: "))
if n<12:
    print("Valor da compra: R$", 1.30*n)
else:
    if n>=12:
        print("Valor da compra: R$", 1*n)
    
