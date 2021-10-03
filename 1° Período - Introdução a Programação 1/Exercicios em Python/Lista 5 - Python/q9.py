#Escrever um algoritmo que leia o nome e o sexo de 50 pessoas e informe o nome e o sexo de cada
#uma. Opções: (ex.: 1 – Masculino / 2 - Feminino). No final informe total de homens e de mulheres.

homem=0
mulher=0
for i in range(5):
    nome=input("Nome: ")
    sexo=int(input("1 - Masculino\n2 - Feminino\nOpção: "))
    print("NOME: ", nome)
    if sexo==1:
        print("SEXO: Masculino\n")
        homem=homem+1
    if sexo==2:
        print("SEXO: Feminino\n")
        mulher=mulher+1
   
print("\nTotal de homens: ", homem, "\nTotal de mulheres: ", mulher)
