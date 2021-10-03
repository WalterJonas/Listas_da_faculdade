#Uma fruteira está vendendo frutas com a seguinte tabela de preços:
#Até 5 Kg Acima de 5 Kg
#Morango R$ 2,50 por Kg R$ 2,20 por Kg
#Maçã R$ 1,80 por Kg R$ 1,50 por Kg
#Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00, receberá ainda um
#desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a
#quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente.

quant_moran=int(input("Morango: "))
quant_maca=int(input("Maçã "))

if quant_moran<=5 and quant_maca<=5:
    valmoran=quant_moran*2.50
    valmaca=quant_maca*1.80
    print("Valor a ser pago ",valmoran+valmaca)
    print("Valor do Morango: ", valmoran, "\nValor Maçã: ", valmaca)

elif quant_moran>5 and quant_maca>5:
    valmoran=quant_moran*2.20
    valmaca=quant_maca*1.50
    print("Valor a ser pago ",valmoran+valmaca)
    print("Valor do Morango: ", valmoran, "\nValor Maçã: ", valmaca)

somaquant=quant_moran+quant_maca
somaval=valmoran+valmaca

if somaquant>8 or somaval>25:
    somaval=somaval-(somaval*(10/100))
    print("Valor a ser pago com desconto",somaval)
    
    


