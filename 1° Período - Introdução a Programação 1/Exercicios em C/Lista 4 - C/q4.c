//. Escreva um algoritmo que determine o n�mero de dias que uma pessoa j� viveu. Considere que um
//m�s tenha 30 dias.

#include<stdio.h>
int main(){
	int idade;
	printf("Insira a idade: ");
	scanf("%d", &idade);
	printf("%d dias vividos\n", 360*idade);
}
