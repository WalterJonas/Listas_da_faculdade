maior=0
soma=0
for i in range(3):
    n_carteira=int(input("\nNÚMERO DA CARTEIRA: "))
    n_multas=int(input("NÚMERO DE MULTAS: "))
    if n_multas>maior:
        maior=n_multas
        carteira=n_carteira
    valor_multa=float(input("VALOR DE CADA MULTA: "))
    divida=n_multas*valor_multa
    print("DIVIDA: ", divida)
    soma=soma+divida

print("\nTOTAL ARRECADADO ", soma)
print("CARTEIRA COM MAIOR NÚMERO DE MULTAS: ", carteira)

