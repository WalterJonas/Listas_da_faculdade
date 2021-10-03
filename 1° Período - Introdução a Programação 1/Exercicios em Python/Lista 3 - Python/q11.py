#Faça um algoritmo que receba um número e verifique se ele é igual a 5, a 200, a 400, se está no
#intervalo entre 500 e 1000, ou se está fora dos escopos anteriores. No final, imprima o resultado.

x=int(input("Insira um número: "))
if x==5 or x==200 or x==400 or x>500 and x<1000:
    print("O número está dentro dos escopos")
else:
    print("O número está fora dos escopos")
