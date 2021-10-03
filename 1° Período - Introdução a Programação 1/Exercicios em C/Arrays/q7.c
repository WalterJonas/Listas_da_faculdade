//Considere um vetor A preenchido aleatoriamente com números inteiros. Calcule os tamanhos e crie
//uma função que decomponha o vetor A em dois novos vetores, um contendo os elementos de ordem ímpar e o
//outro contendo os elementos de ordem par. Por exemplo:
//vetor A = {3, 5, 6, 8, 1, 4, 2, 3, 7} ordem par = {3, 6, 1, 2, 7} ordem impar = {5, 8, 4, 3}

#include<stdio.h>

void preenche(int vetor[], int t)
{
	int i;
	for(i=0; i<t; i++)
	{
		printf("N: ");
		scanf("%d", &vetor[i]);	
	}
}
void preenchePar(int vetor[], int t)
{
	int i;
	printf("\nOrdem Par: \n");
	for(i=0; i<t; i=i+2)
	{
		printf("%d\n", vetor[i]);
	}
}
void preencheImpar(int vetor[], int t)
{
	int i;
	printf("\nOrdem Impar: \n");
	for(i=1; i<t; i=i+2)
	{
		printf("%d\n", vetor[i]);
	}
}
int main()
{
	int t=5, vetor[t];
	preenche(vetor, t);
	preenchePar(vetor, t);
	preencheImpar(vetor, t);
}
