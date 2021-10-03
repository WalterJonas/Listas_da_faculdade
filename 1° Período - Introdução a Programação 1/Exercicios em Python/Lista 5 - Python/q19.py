#Faça um algoritmo que receba o voto de 1000 eleitores. Nesta eleição são apenas três candidatos:
#10 – José da feira / 20 – Maria Fumaça / 30 – Chico. No final, imprima o total de votos de cada candidato e a
#quantidade de votos nulos/brancos.

jose=0
maria=0
chico=0
nulo=0
i=1
while i<5:
    voto=int(input("10 - José da Freire\n20 - Maria Fumaça\n30 - Chico\nVOTO: "))
    if voto==10:
        jose=jose+1
    elif voto==20:
        maria=maria+1
    elif voto==30:
        chico=chico+1
    else:
        nulo=nulo+1
    i=i+1
print("José: ", jose, "\nMaria: ", maria, "\nChico: ", chico, "\nNulo: ", nulo)
        
    
    
