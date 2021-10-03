#Faça um algoritmo que receba um número entre 1 e 12 e imprima o mês correspondente ao valor
#recebido. Caso o usuário digite um número fora desse intervalo, mostre uma mensagem informando que não há mês
#com este número.

mes=int(input("Insira o número correspondente ao mês: "))
if mes==1:
        print("Janeiro")
elif mes==2:
        print("Fevereiro")
elif mes==3:
        print("Março")
elif mes==4:
        print("Abril")
elif mes==5:
        print("Maio")
elif mes==6:
        print("Junho")
elif mes==7:
        print("Julho")
elif mes==8:
        print("Agosto")
elif mes==9:
        print("Setembro")
elif mes==10:
        print("Outubro")
elif mes==11:
        print("Novembro")
elif mes==12:
        print("Dezembro")
else:
        print("O número", mes, "não corresponde a nenhum mês")
