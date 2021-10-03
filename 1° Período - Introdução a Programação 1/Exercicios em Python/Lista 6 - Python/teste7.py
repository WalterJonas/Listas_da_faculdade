#Questão 7. Um automóvel possui um medidor que informa de tempos em tempos a um velocímetro digital a
#distância percorrida (em metros) e o tempo gasto (em segundos). O velocímetro acumula algumas medições e
#eventualmente realiza cálculos para atualizar o valor da velocidade (em km/h) mostrada no display do automóvel.
#Desenvolva um programa que:
# Leia uma sequência de valores na forma: distância percorrida e tempo gasto;
# Acumule os valores e quando receber um par de zeros (0 para a distância e 0 para o tempo gasto), imprime
#na saída a velocidade média em km/h, zerando os acumuladores;
# O programa é encerrado quando recebe um par de -1;
stempo=0
sdist=0
while True:
    dist  = float(input("distancia:"))
    tempo = int(input("Tempo:")) 
    sdist+=dist
    stempo+=tempo
    if (dist==0 and tempo ==0 ):
        print((sdist/stempo)*3.6 , "Km/h")
    elif(dist<0 and tempo<0):
        sdist=0
        stempo=0
        break