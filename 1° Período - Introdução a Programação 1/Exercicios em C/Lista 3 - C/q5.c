//Crie um algoritmo que receba um número e informe se ele é divisível por 5 ou não
#include<stdio.h>
int main(){
	int x;
	printf("Insira um valor: ");
	scanf("%d", &x);
	if(x%5==0)
		printf("Divisivel por 5\n");
	else
		printf("Nao divisivel por 5");
}
