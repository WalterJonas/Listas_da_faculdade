#Um posto está vendendo combustíveis com a seguinte tabela de descontos:

#Álcool 
#até 20 litros, desconto de 3% por litro
#acima de 20 litros, desconto de 5% por litro

#Gasolina
#até 20 litros, desconto de 4% por litro
#acima de 20 litros, desconto de 6% por litro

litros=int(input("Número de litros: "))
combustivel=input("A - Alcool\nG - Gasolina\nOpção: ")

if combustivel=="A" or combustivel=="a" and litros<=20:
    preco=litros*2.90
    desc=preco-(preco*(3/100))
    total=preco-desc
    print("Valor a ser pago: R$", total)
    
if combustivel=="A" or combustivel=="a" and litros>20:
    preco=litros*2.90
    desc=preco-(preco*(5/100))
    total=preco-desc
    print("Valor a ser pago: R$", total)
    
if combustivel=="G" or combustivel=="g" and litros<=20:
    preco=litros*3.30
    desc=preco-(preco*(4/100))
    total=preco-desc
    print("Valor a ser pago: R$", total)
    
if combustivel=="G" or combustivel=="g" and litros>20:
    preco=litros*3.30
    desc=preco-(preco*(6/100))
    total=preco-desc
    print("Valor a ser pago: R$", total)
