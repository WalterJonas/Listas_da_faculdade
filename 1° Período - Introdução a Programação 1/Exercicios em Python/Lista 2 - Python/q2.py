#Entrar com a idade de uma pessoa e imprimir se ela é eleitor, não eleitor
#ou eleitor facultativo
idade=int(input("INSIRA A IDADE DA PESSOA: "))
if idade<16:
    print("NÃO ELEITOR")
elif idade>=18 and idade<=65:
    print("ELEITOR")
else:
    print("ELEITOR FACULTATIVO")
