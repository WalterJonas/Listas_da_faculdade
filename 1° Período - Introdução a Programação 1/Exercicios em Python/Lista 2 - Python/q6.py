#A Prefeitura de Manaus abriu uma linha de crédito para os funcionários estatutários. O
#valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Crie um algoritmo que
#receba o o salário bruto, o valor do empréstimo, a quantidade de parcelas e imprima se o
#empréstimo pode ser concedido ou não.

salario=float(input("Insira o salario: "))
emprestimo=float(input("Insira o emprestimo: "))
parcela=int(input("digite a parcela: "))
prestacao=emprestimo/parcela
if prestacao<salario*0.30:
    print("CONCEDIDO")
else:
    print("NÃO CONCEDIDO")
