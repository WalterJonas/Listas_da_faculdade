//. Escreva um algoritmo que determine o número de dias que uma pessoa já viveu. Considere que um
//mês tenha 30 dias.

#include<stdio.h>
int main(){
	int idade;
	printf("Insira a idade: ");
	scanf("%d", &idade);
	printf("%d dias vividos\n", 360*idade);
}
