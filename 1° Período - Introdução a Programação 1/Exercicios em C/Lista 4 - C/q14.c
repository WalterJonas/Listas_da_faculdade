//Escreva um algoritmo que, para uma conta banc�ria, leia o seu n�mero, o saldo, o tipo de opera��o
//a ser realizada (dep�sito ou retirada) e o valor da opera��o. Ap�s, determine e mostre o novo saldo. Se o novo
//saldo ficar negativo, deve ser mostrada, tamb�m, a mensagem �conta estourada�.

#include<stdio.h>
int main(){
	int n;
	float saldo, valor_op, saldo_novo;
	char op;
	printf("Insira o numero da conta: ");
	scanf("%d", &n);
	printf("Insira o valor do saldo: R$");
	scanf("%f", &saldo);
	printf("Tipo de opera��o, digite D(dep�sito) ou R(retirada): ");
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
