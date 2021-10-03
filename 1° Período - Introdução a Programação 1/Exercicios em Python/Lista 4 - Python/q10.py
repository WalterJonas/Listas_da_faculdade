#Crie um algoritmo para ler a distância (km) e o tempo de viagem (horas) de um automóvel, e
#informar se a velocidade média foi superior ao limite (110 km/h) ou não.

distancia=float(input("Insira a distância(Km): "))
tempo=int(input("Insira o tempo da viagem(horas): "))
velocidade_media=distancia/tempo
print("Velocidade média: ", velocidade_media) 
if velocidade_media>110:
    print("A velocidade média foi maior que o limite de 110 Km/h")
else:
    print("A velocidade média não foi maior que o limite de 110 Km/h")
