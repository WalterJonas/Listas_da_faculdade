//Crie um algoritmo que receba um n�mero e informe se ele � divis�vel por 5 ou n�o
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
