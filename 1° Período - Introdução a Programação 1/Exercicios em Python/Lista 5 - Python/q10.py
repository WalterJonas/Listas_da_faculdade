#Faça um algoritmo que calcule a média de salários de uma empresa, pedindo ao usuário a
#quantidade de funcionários e o salário de cada funcionário e devolvendo a média, o salário mais alto e o salário
#mais baixo.

quant=int(input("Quantidade de funcionários: "))
salario1=float(input("SALARIO: "))
maior=salario1
menor=salario1
soma=0
i=0
while i<quant-1:
    salario=int(input("SALARIO: "))
    if salario>maior:
        maior=salario
    if salario<menor:
        menor=salario
    i=i+1
    soma=soma+salario
media=(salario1+soma)/quant
print("Maior salario: ", maior, "\nMenor salario: ", menor, "\nMedia dos salarios: ", media)
