#A conversão de graus Farenheit para Centígrados é obtida por C = (5-9)*(F-32). Faça um
#programa que calcule e escreva uma tabela de centígrados em função de graus Farenheit, que variam de 50 a
#150 de 1 em 1.

i=50
while i<=150:
    c=(i-32)/(9/5)
    print("Farenheit: ", i, "Celcius: ", c)
    i=i+1
