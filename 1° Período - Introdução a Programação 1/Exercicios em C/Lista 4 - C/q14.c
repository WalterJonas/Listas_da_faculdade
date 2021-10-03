//Escreva um algoritmo que, para uma conta bancária, leia o seu número, o saldo, o tipo de operação
//a ser realizada (depósito ou retirada) e o valor da operação. Após, determine e mostre o novo saldo. Se o novo
//saldo ficar negativo, deve ser mostrada, também, a mensagem “conta estourada”.

#include<stdio.h>
int main(){
	int n;
	float saldo, valor_op, saldo_novo;
	char op;
	printf("Insira o numero da conta: ");
	scanf("%d", &n);
	printf("Insira o valor do saldo: R$");
	scanf("%f", &saldo);
	printf("Tipo de operação, digite D(depósito) ou R(retirada): ");
	scanf("%s", &op);
	printf("Valor da operacao: ");
	scanf("%f", &valor_op);
	if(op=='D' || op=='d'){
		saldo_novo=saldo+valor_op;
	    printf("Novo saldo: R$ %f", saldo_novo);
	}   
	else if(op=='R' || op=='r'){
		saldo_novo=saldo-valor_op;
	    printf("Novo saldo: R$ %f", saldo_novo);
	}
	if(saldo_novo<=0){
		printf("Conta estourada");
	}
	        
}
