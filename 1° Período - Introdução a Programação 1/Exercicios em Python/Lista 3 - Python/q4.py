#O cardápio de uma lanchonete é dado abaixo. Prepare um algoritmo que leia a quantidade de cada item
#que você consumiu e calcule a conta final. Hambúrguer................. R$ 3,00
#X-burguer..................... R$ 2,50
#Fritas............................ R$ 2,50
#Refrigerante................. R$ 1,00
#Milkshake..................... R$ 3,00

print("1 - HAMBÚRGUER****R$3,00")
print("2 - X-BÚRGUER*****R$2,50")
print("3 - FRITAS********R$2,50")
print("4 - REFRIGERANTE**R$1,00")
print("5 - MILKSHAKE*****R$3,00")
cont=1
while (cont<=5):
    print("********* Produto ", cont, "**********")
    quant=int(input("Insira a quantidade que você deseja nesse produto: "))

    if cont==1:
        conta=quant*3
    elif cont==2:
        conta+=quant*2.5
    elif cont==3:
        conta+=quant*2.5
    elif cont==4:
        conta+=quant*1
    elif cont==5:
        conta+=quant*3
    cont+=1
print("Conta: R$", conta)
        
        
