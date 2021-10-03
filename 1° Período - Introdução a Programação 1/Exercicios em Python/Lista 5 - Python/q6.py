#Construa um algoritmo que leia um grupo de 50 valores inteiros, determine:
#a) A soma dos números positivos;
#b) A quantidade de valores negativos;

soma=0
negativo=0
for i in range(5):
    x=int(input("Insira o valor: "))
    if x>0:
        soma=soma+x
    if x<0:
        negativo=negativo+1
print("Soma dos positivos: ", soma, "\nQuantidade de negativos: ", negativo)
