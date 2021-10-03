//Escreva um programa que receba um número do usuário e apresente a série de Fibobnacci até o
//número lido. A série de Fibonacci é formada pela sequência: 1,1,2,3,5,8,13,21,34,..., etc. Esta série se
//caracteriza pela soma de um termo posterior com o seu anterior subsequente.
#include<stdio.h>
int main()
{
	int x, i,ant,atu,prox;
	printf("N: ");
	scanf("%d", &x);
	ant=0;
	atu=1;
	i=1;
	while(atu<x)
	{
		prox=ant+atu;
	    printf("%d\n", prox);
	    ant=atu;
	    atu=prox;
	    i=i+1;
	}
}

