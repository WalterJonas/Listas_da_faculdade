#Crie um algoritmo que calcule e mostre o cinco primeiros números primos

for i in range(2, 12):
    for j in range(2, i):
        if i%j==0:
            break
    else:
        print(i)
