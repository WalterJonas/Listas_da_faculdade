#Escreva um algoritmo que leia um número e diga se este número é perfeito ou não. Um número
#perfeito é aquele que é igual à soma de seus divisores, excluindo o próprio número. Exemplos:
#1 + 2 + 3 = 6;
#1 + 2 + 4 + 7 = 28.

x=int(input("N: "))
i=1
soma=0
while i<x:
    if x%i==0:
        soma=soma+i
        print(i)
    i=i+1
print("Soma dos divisores: ", soma)
if soma==x:
    print("PERFEITO")
else:
    print("NÃO É PERFEITO")
    
