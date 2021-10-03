#Faça um programa, utilizando estrutura de condição, que receba um número real, digitado pelo
#usuário e mostre o menu para selecionar o tipo de cálculo que deve ser realizado. No final, mostre o resultado e
#a operação efetuada. MENU
#101-Raiz quadrada
#102-A metade
#103-10% do número
#104-O dobro
#Escolha a opção:

import math
x=float(input("Insira um número: "))
print("\n101 - Raiz quadrada\n102 - A metade\n103 - 10% do número\n104 - O dobro\n")
op=int(input("Escolha uma opção: "))
if op==101:
    print("Raiz: ", math.sqrt(x))
elif op==102:
    print("A metade", x/2)
elif op==103:
    print("10% do número: ", x*0.10)
elif op==104:
    print("O dobro: ", x*2)
else:
    print("Opção inválida")
