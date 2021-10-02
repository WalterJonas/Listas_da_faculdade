#Faça um algoritmo que leia o nome do vendedor, o Salario do vendedor
#e o total de vendas no mês e imprima o total a receber.

nome=input("Insira o nome do vendedor: ")
salario=float(input("Insira o salario: "))
vendas=int(input("Insira o total de vendas no mês(em dinheiro): "))
total_receber=vendas+(vendas*0.15)+salario
print("Nome do vendedor: ", nome)
print("Total a receber: R$", total_receber)

