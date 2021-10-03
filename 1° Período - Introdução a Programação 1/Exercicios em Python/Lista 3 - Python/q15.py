#Segundo uma tabela médica, o peso ideal está relacionado com a altura e sexo. Faça um algoritmo que
#receba a altura e o sexo (M ou F) de uma pessoa, calcule e imprima o seu peso ideal, utilizando as seguintes fórmulas:
#Homens: (72.7 * altura) – 58
#Mulheres: (62.1 * altura) – 44.7

altura=float(input("Insira a altura da pessoa: "))
sexo=input("Insira o M(Para Masculino) e F(Para Feminino)")
if sexo=="M" or sexo=="m":
    peso=(72.7*altura)-58
    print("Peso da pessoa: ", peso)
elif sexo=="F" or sexo=="f":
    peso=(62.1*altura)-44.7
    print("Peso da pessoa: ", peso)
else:
    print("Opção Inválida")
        
