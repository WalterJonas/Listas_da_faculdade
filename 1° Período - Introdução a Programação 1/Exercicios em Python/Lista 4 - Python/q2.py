#Considere a seguinte situação: descontam-se inicialmente 10% do salário bruto do trabalhador
#como contribuição à previdência social. Após esse desconto, há um outro desconto de 5% sobre o valor restante
#do salário bruto, a título de um determinado imposto. Faça um algoritmo que leia o salário bruto de um cidadão
#e imprima o seu salário líquido.

salario=float(input("Insira o salário bruto do trabalhador: "))
desc1=salario-(salario*0.10)
desc2=desc1-(desc1*0.05)
print("Salário líquido: ", desc2)
