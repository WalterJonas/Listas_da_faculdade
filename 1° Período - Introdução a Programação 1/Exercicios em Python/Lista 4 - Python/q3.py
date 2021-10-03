#Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma comissão calculada
#de acordo com o valor de suas vendas. Se o valor da venda de um corretor for maior que R$ 50.000.00 a
#comissão será de 12% do valor vendido. Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$
#50.000.00 (incluindo extremos) a comissão será de 9.5%. Em qualquer outro caso, a comissão será de 7%. 
#Escreva um algoritmo que gere um relatório contendo nome, valor da venda e comissão de cada um dos
#corretores. O relatório deve mostrar também o total de vendas da empresa.


for i in range(3):
    nome=str(input("\nInsira o nome do corretor: "))
    venda=float(input("Insira o valor da venda do corretor: "))

    if venda>50000:
        comissao=venda*(12)/100
        print("\nNome: ", nome)
        print("Venda: ", venda)
        print("Valor da comissão: ", comissao)

    elif venda>=30000 and venda<=50000:
        comissão=venda*(9.5)/100
        print("\nNome: ", nome)
        print("Venda: ", venda)
        print("Valor da comissão: ", comissão)

    else:
        comissao=venda*0.07
        print("\nNome: ", nome)
        print("Venda: ", venda)
        print("Valor da comissão: ", comissao)
        

    



