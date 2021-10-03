#A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Faça um
#algoritmo que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:
#Categoria Idade
#Infantil A 5 – 7 anos
#Infantil B 8 – 10 anos
#Juvenil A 11 – 13 anos
#Juvenil B 14 – 17 anos
#Sênior Maiores de 18 anos

idade=int(input("Insira a idade do atleta: "))
if idade>=5 and idade<=7:
    print("INFANTIL A")
elif idade>=8 and idade<=10:
    print("INFANTIL B")
elif idade>=11 and idade<=13:
    print("JUVENIL A")
elif idade>=14 and idade<=17:
    print("JUVENIL B")
elif idade>=18:
    print("SENIOR")
else:
    print("SEM CATEGORIA")
