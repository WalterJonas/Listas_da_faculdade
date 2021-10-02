#Faça um Algoritmo que receba um salário e atribua em cima do salário uma
#gratificação de 5% e depois atribua o imposto de 8% em cima do valor atual. 
salario=float(input("Insira o salario base: "))
salario_receber=salario+(salario*(0.05-0.08))
print("Gratificação de 5% e imposto de 8%:")
print("Salario a receber: ", salario_receber) 

