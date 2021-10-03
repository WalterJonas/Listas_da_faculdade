#Crie um algoritmo que leia um número inteiro do usuário e imprima uma mensagem se
#o número digitado for par ou ímpar. Para verificar se um número é par, utilizamos o operador %
#(resto da divisão). Ao dividir um número por 2 e o resto da divisão for igual a zero, temos um
#número par.

n=int(input("digite o valor de n: "))
resto=(n%2)
if resto==0:
    print("e par")    
else:
    print("e impar ")

     
