#Escreva um algoritmo que, para uma conta bancária, leia o seu número, o saldo, o tipo de operação
#a ser realizada (depósito ou retirada) e o valor da operação. Após, determine e mostre o novo saldo. Se o novo
#saldo ficar negativo, deve ser mostrada, também, a mensagem “conta estourada”.

n=int(input("Insira o número da conta: "))
saldo=float(input("Insira o valor do saldo: R$"))
op=str(input("Tipo de operação, digite D(depósito) ou R(retirada): "))
valor_op=float(input("Valor da operação: R$"))

if op=="D" or op=="d":
    saldo_novo=saldo+valor_op
    print("Novo saldo: R$", saldo_novo)
elif op=="R" or op=="r":
    saldo_novo=saldo-valor_op
    print("Novo saldo: R$", saldo_novo)
    if saldo_novo<=0:
        print("Conta estourada")
    
    
