#Faça um algoritmo que leia a base e a altura e imprima
#o valor do perimetro, da area e da diagonal.

import math
base=float(input("Insira a base do retângulo: "))
altura=float(input("Insira a altura do retângulo: "))
perim=2*(base+altura)
area=base*altura
diagonal=math.sqrt(base**2+altura**2)
print("Perimetro: ", perim)
print("Area: " , area)
print("Diagonal: ", diagonal)
