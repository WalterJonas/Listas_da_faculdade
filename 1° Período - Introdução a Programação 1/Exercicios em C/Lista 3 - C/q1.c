//Todo restaurante, embora por não possa obrigar o cliente a pagar, cobra 10% para o garçom. Crie um
//algoritmo que leia o valor gasto com despesas realizadas em um restaurante e imprima o valor total da gorjeta.
#include<stdio.h>
int main(){
	float despesas, gorjeta;
	printf("Valor das despesas: ");
	scanf("%f", &despesas);
	gorjeta=despesas+(despesas*10/100);
	printf("Total da Gorjeta: %0.1f", gorjeta);
}
