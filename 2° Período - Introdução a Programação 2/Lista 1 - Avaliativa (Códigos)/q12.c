//. Escreva um algoritmo com dois vetores de 10 posições cada e faça a multiplicação
//dos elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor
//resultante.
#include <stdio.h>

int main()
{
	int tam=5, vetorA[tam], vetorB[tam], vetorC[tam], i;
	for(i=0; i<tam; i++)
	{
		printf("Preecha A: ");
		scanf("%d", &vetorA[i]);
	}
	for(i=0; i<tam; i++)
	{
		printf("Preecha B: ");
		scanf("%d", &vetorB[i]);
	}
	for(i=0; i<tam; i++)
	{
		vetorC[i]=vetorA[i]*vetorB[i];
		printf("Vetor C: %d\n", vetorC[i]);
	}
	
}
