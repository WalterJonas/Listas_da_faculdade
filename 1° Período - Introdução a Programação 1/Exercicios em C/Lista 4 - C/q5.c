//Suponha que um caixa disponha apenas de notas de 1, 10 e 100 reais. Considerando que alguém
//está pagando uma compra, escreva um algoritmo que mostre o número mínimo de notas que o caixa deve
//fornecer como troco. Mostre também: o valor da compra, o valor do troco e a quantidade de cada tipo de nota
//do troco. Suponha que o sistema monetário não utilize moedas.

#include<stdio.h>
int main(){
	int valcompra, valpagar, troco, restop100, restop10;
	printf("Valor da compra: ");
	scanf("%d", &valcompra);
	printf("Valor a pagar: ");
	scanf("%d", &valpagar);
	troco=valpagar-valcompra;
	printf("Troco: %d\n", troco);
	if(troco>=100){
		restop100=troco-troco%100;
	    restop100=restop100/100;
	    troco=troco-restop100*100;
	    printf("%d notas de 100\n", restop100);
	}
	if(troco>=10){
		restop10=troco-troco%10;
	    restop10=restop10/10;
	    troco=troco-restop10*10;
	    printf("%d notas de 10\n", restop10);
	}   
	printf("%d notas de 1\n", troco);	
}
