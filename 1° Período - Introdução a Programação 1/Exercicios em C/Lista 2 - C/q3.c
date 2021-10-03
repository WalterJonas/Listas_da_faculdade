// Escreva um programa que receba dois números e um sinal. 
// Calcule e mostre resultado de acordo com a operação matemática definida pelo sinal. 
// “+” Soma, “-” Subtração, “*” Multiplicação e “/” Divisão.
#include<stdio.h>
int main(){
	float x, y, resultado;
	char sinal;
	printf("Insira o primeiro valor: ");
	scanf("%f", &x);
	printf("Insira o sinal: ");
	scanf("%s", &sinal);
	printf("Insira o segundo valor: ");
	scanf("%f", &y);
	switch(sinal){
		case '+':
			resultado=x+y;
			printf("Soma: %f\n", resultado);
			exit(0);
		case '-':
			resultado=x-y;
			printf("Subtracao: %f\n", resultado);	
			exit(0);
		case '*':
			resultado=x*y;
			printf("Multiplicacao: %f\n", resultado);
			exit(0);
		case '/':
			resultado=x/y;
			printf("Div: %f\n", resultado);
			exit(0);
		default:
			printf("Opcao invalida. Tente de novo!\n");
	}
}
