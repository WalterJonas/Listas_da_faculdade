#Faça um algoritmo para:
#a) Ler um valor k qualquer
#b) Calcular T, como segue abaixo:
#T = ( k+1)+(k+2)+(k+3)+(k+4)+(k+5)+ ...+(k+100)

k=int(input("K: "))
soma=0
i=1
while i<=100:
    t=(k+i)
    soma=soma+t
    i=i+1
print("Valor de T: ", soma)
