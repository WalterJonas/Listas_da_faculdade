//Fa�a um algoritmo que receba um n�mero e verifique se ele � igual a 5, a 200, a 400, se est� no
//intervalo entre 500 e 1000, ou se est� fora dos escopos anteriores. No final, imprima o resultado.

#include<stdio.h>
int main(){
	int x;
	printf("Insira o x: ");
	scanf("%d", &x);
	if(x==5)
		printf("x e igual a 5\n");
	else if(x==200)
		printf("x e igual a 200\n");
	else if(x==400)
		printf("x e igual a 400\n");
	else if(x>=500 && x<=1000)
		printf("x esta entre 500 e 1000\n");
	else
		printf("x nao e 5, 200, 400, e nao esta entre 500 e 1000\n");
}
