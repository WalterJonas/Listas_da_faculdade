#Faça um algoritmo que receba um salário e um percentual de aumento e
#depois e imprima o novo valor do salário.

salario=float(input("Insira o salario do funcionario: "))
percentual_aument=float(input("Insira o percentual de aumento: "))
print("Aumento de ", percentual_aument,"%")
novo_salario=salario+(salario*percentual_aument)/100
print("Salario novo: ", novo_salario)
