#Faça um algoritmo que calcule a quantidade de litros necessários para
#uma certa viagem. 

temp_gasto=int(input("Insira o tempo gasto na viajem em Horas: "))
veloc_media=int(input("Insira a velocidade média durante a viagem em Km/h: "))
distancia=temp_gasto*veloc_media
litros=round(distancia/12, 3)
print("Litros necessários: ", litros)
