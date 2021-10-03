#Faça um Programa que pergunte em que turno a pessoa estuda. Peça para digitar M-matutino ou V
#- Vespertino ou N - Noturno. Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.

turno=str(input("Em qual turno você estuda? Digite M(Para Matutino), V(Para Vesperino) ou N(Para Noturno: "))
if turno=="M" or turno=="m":
    print("BOM DIA")
elif turno=="V" or turno=="v":
    print("BOA TARDE")
elif turno=="N" or turno=="n":
    print("BOA NOITE")
else:
    print("VALOR INVÁLIDO")

    
