#Faça um algoritmo que leia um conjunto de números (X) e imprima a quantidade de números pares
#(QPares) e a quantidade de números impares (QImpares) lidos. Admita que o valor -1 é utilizado como sentinela
#para fim de leitura. Ex.: 1,2,3,4,5 => Pares=2 Ímpares=3

i=0
par=0
impar=0
while i<50:
    x=int(input("N: "))
    if x==-1:
        break
    if x%2==0:
       par=par+1
    else:
        impar=impar+1
    i=i+1
print("Pares: ", par, "\nImpares: ", impar)
