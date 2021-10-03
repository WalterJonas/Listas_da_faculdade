soma_residencial=0
soma_comercial=0
soma_industrial=0
soma=0
cont=0
for i in range(3):
    n_consumidor=int(input("\nNÚMERO DO CONSUMIDOR: "))
    if n_consumidor==0:
        exit()
    q_kwh=float(input("Quantidade de KWh consumidos durante o mês: "))
    tipo=int(input("1 - Residencial\n2 - Comercial\n3 - Indústrial\nTipo: "))
    if tipo==1:
        custo_residencia=q_kwh*0.30
        print("Custo total: R$", custo_residencia)
        soma_residencial=soma_residencial+q_kwh
    if tipo==2:
        custo_comercio=q_kwh*0.50
        print("Custo total: R$", custo_comercio)
        soma_comercial=soma_comercial+q_kwh
    if tipo==3:
        custo_industria=q_kwh*0.70
        print("Custo total: R$", custo_industria)
        soma_industrial=soma_industrial+q_kwh
    if tipo==1 or tipo==2:
        soma=soma+q_kwh
        cont=cont+1
if soma!=0 and cont!=0:
    media=soma/cont
else:
    media=0
print("\nConsumo residencial: ", soma_residencial, "kwh\nConsumo comercial: ", soma_comercial, "kwh\nConsumo indústrial: ", soma_industrial, "kwh")
print("Média de consumo residencial e comercial: ", media, "kwh")
    

