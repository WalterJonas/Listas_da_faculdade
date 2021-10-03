#Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metros e cresce 3
#centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé
#seja maior que Chico.

chico=1.50
ze=1.10
ano=0
while ze<chico:
    ze=ze+0.03
    chico=chico+0.02
    ano=ano+1
print(ano, "anos")
