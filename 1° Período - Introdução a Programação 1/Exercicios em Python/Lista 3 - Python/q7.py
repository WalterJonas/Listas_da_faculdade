#Crie um algoritmo que receba um número e imprima uma mensagem se for múltiplo de 4 e 8 ou de 6 e 9.

x=int(input("Insira um número: "))
if x%4==0 and x%8==0:
    print(x, "é mútiplo de 4 e 8")
else:
    if x%6==0 and x%9==0:
        print(x, "é mútiplo de 6 e 9")
    
