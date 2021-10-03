#Escreva um algoritmo para ler 10 números. Todos os números lidos com valor inferior a 40 devem
#ser somados. Escreva o valor final da soma efetuada.

soma=0
for i in range(5):
    x=int(input("Insira um número: "))
    if x<40:
        soma=soma+x
print("Soma: ", soma)
