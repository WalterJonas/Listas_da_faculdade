import os
maior=0
menor=99999999
soma_norte=0
soma_am=0
cont_am=0
soma_pa=0
cont_pa=0
for i in range(2):
    cod=int(input("\nCódigo da cidade: "))
    estado=int(input("1 - AC\n2 - AM\n3 - AP\n4 - PA\n5 - RO\n6 - RR\n7 - TO\nESTADO: "))
    nvp=int(input("Número de veículos de passeio: "))
    natv=int(input("Número de acidentes de transito com vitima: "))
    os.system('clear') or None
    if natv>maior:
        maior=natv
        cidademaior=cod
    if natv<menor:
        menor=natv
        cidademenor=cod
    soma_norte=soma_norte+nvp
    if estado==2:
        cont_am=cont_am+1
        soma_am=soma_am+nvp
    if estado==4:
        cont_pa=cont_pa+1
        soma_pa=soma_pa+natv
media=soma_norte/2
if soma_am!=0 and cont_am!=0:
    media_am=soma_am/cont_am
else:
    media_am=0
if soma_pa!=0 and cont_pa!=0:
    media_pa=soma_pa/cont_pa
else:
    media_pa=0

print("\nMAIOR INDICE É", maior, "ACIDENTES NA CIDADE", cidademaior)
print("MENOR INDICE É", menor, "ACIDENTES NA CIDADE", cidademenor)
print("MÉDIA DE VEÍCULOS DAS CIDADES DO NORTE: ", media)
print("MÉDIA DE VEÍCULOS DO AMAZONAS: ", media_am)
print("MÉDIA DE ACIDENTES NO PARÁ: ", media_pa)

