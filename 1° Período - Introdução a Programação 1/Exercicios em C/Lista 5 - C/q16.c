//Escreva um programa que receba um n�mero do usu�rio e apresente a s�rie de Fibobnacci at� o
//n�mero lido. A s�rie de Fibonacci � formada pela sequ�ncia: 1,1,2,3,5,8,13,21,34,..., etc. Esta s�rie se
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

