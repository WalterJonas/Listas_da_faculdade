#Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da compra
#form menor que R$ 20,00; caso contrário, o lucro será de 30%. entrar com o valor do produto e imprimir o valor da
#venda.

valor=float(input("Insira o valor do produto: "))
if valor<20:
    venda=valor+(valor*0.45)
    print("Valor da venda: ", venda)
else:
    if valor>=20:
        venda=valor+(valor*0.30)
        print("Valor da venda: ", venda)
        
