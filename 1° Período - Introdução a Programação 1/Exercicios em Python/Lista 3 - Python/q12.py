#Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o desconto no INSS, de
#acordo com a tabela a seguir:
#Menor ou igual a R$ 600,00 isento
#Maior que R$ 600,00 e menor ou igual a R$ 1200,00 20%
#Maior que R$ 1200,00 e menor ou igual a R$ 2000,00 25%
#Maior que R$ 2000,00 30%

salario=float(input("Insira o salário: "))
if salario<=600:
    print("Isento")
elif salario>600 and salario<=1200:
    inss=salario-(salario*0.20)
    print("Salário com o desconto do INSS: ", inss)
elif salario>1200 and salario<=2000:
    inss=salario-(salario*0.25)
    print("Salário com o desconto do INSS: ", inss)
elif salario>2000:
    inss=salario-(salario*0.30)
    print("Salário com o desconto do INSS: ", inss)


    
    
