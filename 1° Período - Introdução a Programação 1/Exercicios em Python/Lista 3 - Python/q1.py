#Todo restaurante, embora por não possa obrigar o cliente a pagar, cobra 10% para o garçom. Crie um
#algoritmo que leia o valor gasto com despesas realizadas em um restaurante e imprima o valor total da gorjeta.

despesas=float(input("Insira o valor gasto com despesas: "))
gorjeta=despesas+(despesas*10/100)
print("Total da Gorjeta: ", gorjeta)
