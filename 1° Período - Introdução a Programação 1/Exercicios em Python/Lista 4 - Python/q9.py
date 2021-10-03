#Crie um algoritmo que leia a temperatura de uma pessoa e mostre a mensagem “Febre Alta” (temp
#= 39), “Febril” (39 > temp = 37) ou “Sem Febre” (temp < 37).

temp=float(input("Insira a temperatura de uma pessoa: "))
if temp>=39:
    print("Febre alta")
elif temp>=37 and temp<39:
    print("Febril")
else:
    print("Não há febre")
    
