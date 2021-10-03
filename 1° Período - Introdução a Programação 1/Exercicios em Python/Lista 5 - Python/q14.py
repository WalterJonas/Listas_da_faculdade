#Calcule o valor de W de acordo com a fórmula abaixo.
#O valor de N é fornecido pelo usuário, sendo o limite da reptetição.
#W = 1 + 1/2 + 1/3 + 1/4 + 1/5 + ... 1/N

n=int(input("N: "))
soma=0
for i in range(1, n+1):
    w=(1/i)
    soma=(soma+w)
print("VALOR DE W: ", soma)
