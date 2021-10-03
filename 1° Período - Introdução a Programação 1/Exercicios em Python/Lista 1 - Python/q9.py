#Faça um algoritmo que faça o seguinte calculo: "((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))",
#leia os valores necessários antes.

import math
x1=float(input("Insira o valor x1: "))
y1=float(input("Insira o valor y1: "))
x2=float(input("Insira o valor x2: "))
y2=float(input("Insira o valor y2: "))
distancia=math.sqrt((x2-x1)**2+(y2-y1)**2)
print("Distância: ", distancia)
