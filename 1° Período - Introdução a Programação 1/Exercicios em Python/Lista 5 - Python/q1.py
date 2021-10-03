#Faça um algoritmo que imprima todos os números pares compreendidos entre 95 e 907. O
#algoritmo deve também calcular e mostrar a soma destes valores.

soma=0
for i in range(95, 907):
    if i%2==0:
        soma=soma+i
        print(i)
print("SOMA: ", soma)
