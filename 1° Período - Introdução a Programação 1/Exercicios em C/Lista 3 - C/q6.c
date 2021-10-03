//Crie um algoritmo que receba um número e imprima uma mensagem se for divisível por 3 e por 7.

#include<stdio.h>
int main(){
	int x;
	printf("Insira um valor: ");
	scanf("%d", &x);
	if(x%3==0 && x%7==0)
		printf("Divisivel por 3 e 7\n");
	else
		printf("Nao divisivel por 3 e 7");
}
