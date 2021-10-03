//. Crie um algoritmo que receba um número e imprima uma mensagem se for múltiplo de 4 e 8 ou de 6 e 9.

#include<stdio.h>
int main(){
	int x;
	printf("Insira um valor: ");
	scanf("%d", &x);
	if(x%4==0 && x%8==0)  
		printf("Divisivel por 4 e 8\n");
	else if(x%6==0 && x%9==0)
		printf("Divisivel por 6 e 9\n");
}
