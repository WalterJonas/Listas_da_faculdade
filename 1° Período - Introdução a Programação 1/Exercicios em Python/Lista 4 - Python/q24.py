#Zezinho comprou um microcomputador para controlar o rendimento diário de seu trabalho como
#pescador. Toda vez que ele traz um peso de peixes maior do que o estabelecido pelo regulamento de pesca do
#estado do Amazonas (50 quilos), deve pagar um multa de R$ 4,00 por quilo excedente. Zezinho precisa que
#você faça um algoritmo que leia o peso dos peixes e verifique se há excesso. Se houver, o excesso e o valor da
#multa que Zezinho deverá pagar. Caso contrário, mostrar uma mensagem que ele não deve pagar nada.

peso=float(input("Peso dos peixes: "))

if peso<=50:
    print("Não precisa pagar nada")
else:
    print("Excesso de peso")
    multa=peso-50
    multa=multa*4
    print("Multa: R$", multa)
