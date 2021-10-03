for i in range(3):
    nome=input("\nNOME: ")
    distancia1=float(input("Distancia: "))
    if distancia1==0:
        exit()
    maior=distancia1
    menor=distancia1
    soma=0
    i=2
    while i<6:
        distancia=float(input("Distancia: "))
        if distancia>maior:
            maior=distancia
        if distancia<menor:
            menor=distancia
        soma=soma+distancia
        i=i+1
    media=(soma+distancia1-maior-menor)/3
    
    print("MAIOR DISTANCIA: ", maior)
    print("MENOR DISTANCIA: ", menor)
    print("MÉDIA: ", media)
