#Da mesma forma que a multiplicação pode ser expressa como o resultado de várias adições, a
#potência pode ser representada por uma série de multiplicações. Faça um algoritmo que calcule a potência de
#um número informado pelo usuário utilizando o operador “*”.

base=int(input("BASE: "))
expoente=int(input("EXPOENTE: "))
pot=1
for i in range(1, expoente+1):
    pot=base*pot
print("Potencia: ", pot)
