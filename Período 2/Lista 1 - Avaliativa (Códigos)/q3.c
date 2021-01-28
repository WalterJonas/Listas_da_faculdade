//Crie um programa que preencha dois vetores X e Y. Crie um vetor Z para armazenar
//os seguintes cálculos: a) a diferença entre X e Y; b) a soma entre X e Y; c) o produto entre X e Y. Mostre o vetor Z após cada operação.

#include<stdio.h>
int main()
{
	int tam=5, vetorX[tam], vetorY[tam], vetorZ[tam], i, soma, sub, mult;
	for(i=0; i<tam; i++)
	{
		printf("Preencha X: ");
		scanf("%d", &vetorX[i]);
	}
	for(i=0; i<tam; i++)
	{
		printf("Preencha Y: ");
		scanf("%d", &vetorY[i]);
	}
	for(i=0; i<tam; i++)
	{
		vetorZ[i]=vetorX[i]-vetorY[i];
		printf("Vetor Z: %d\n", vetorZ[i]);	
	}
	printf("\n");
	for(i=0; i<tam; i++)
	{
		vetorZ[i]=vetorX[i]+vetorY[i];
		printf("Vetor Z: %d\n", vetorZ[i]);	
	}
	printf("\n");
	for(i=0; i<tam; i++)
	{
		vetorZ[i]=vetorX[i]*vetorY[i];
		printf("Vetor Z: %d\n", vetorZ[i]);	
	}
}
