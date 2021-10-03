#Um hotel cobra R$ 60.00 a diária e mais uma taxa de serviços. A taxa de serviços é de:
#• R$ 5.50 por diária, se o número de diárias for maior que 15;
#• R$ 6.00 por diária, se o número de diárias for igual a 15;
#• R$ 8.00 por diária, se o número de diárias for menor que 15. 
#Construa um algoritmo que mostre o nome e o total da conta de um cliente.

nome=str(input("Insira o nome do cliente: "))
diaria=int(input("Insira a quantidade de diárias do cliente: "))
if diaria>15:
    conta=(60+5.50)*diaria
    print("Cliente: ", nome, "\nConta: ", conta)
elif diaria==15:
    conta=(60+6)*diaria
    print("Cliente: ", nome, "\nConta: ", conta)
elif diaria<15:
    conta=(60+8)*diaria
    print("Cliente: ", nome, "\nConta: ", conta)
