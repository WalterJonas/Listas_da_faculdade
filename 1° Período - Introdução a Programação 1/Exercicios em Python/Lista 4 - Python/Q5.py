#Suponha que um caixa disponha apenas de notas de 1, 10 e 100 reais. Considerando que alguém
#está pagando uma compra, escreva um algoritmo que mostre o número mínimo de notas que o caixa deve
#fornecer como troco. Mostre também: o valor da compra, o valor do troco e a quantidade de cada tipo de nota
#do troco. Suponha que o sistema monetário não utilize moedas.

valcompra=int(input())
valpagar=int(input())
troco=valpagar-valcompra
print(troco)
if troco>=100:
    restop100=troco-troco%100
    restop100=restop100/100
    troco=troco-restop100*100
    print(restop100," notas de 100")
else:
    if troco>=10:
        restop10=troco-troco%10
        restop10=restop10/10
        troco=troco-restop10*10
        print(restop10," notas de 10")
print(troco,"notas de 1")
