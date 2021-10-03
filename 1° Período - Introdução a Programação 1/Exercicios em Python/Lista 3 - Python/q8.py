#Crie um algoritmo que receba nome, sexo (M ou F) e idade de uma pessoa. Se a pessoa for do sexo
#feminino e tiver menos do que 25 anos, imprimir seu nome e a mensagem: “Aceita!”. Caso contrário, imprimir o nome
#e a mensagem: “Não aceita!”.

nome=input("Insira o nome da pessoa: ")
sexo=input("Insira M(para masculino) e F(para feminino: ")
idade=int(input("Insira a idade de uma pessoa: "))
if sexo=="F" or sexo=="f" and idade<25:
    print(nome, "ACEITA!")
else:
    print(nome, "NÃO ACEITA!")
