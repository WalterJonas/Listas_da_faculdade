//Crie um programa que preencha um vetor com 100 números inteiros. Verfique o
//maior e o menor valor presente no vetor e informe estes valores e suas posições no vetor.
#include <stdio.h>
int main()
{
	int tam=5, vetor[tam], i, pos_maior, pos_menor;
	for(i=0; i<tam; i++)
	{
		scanf("%d", &vetor[i]);
	}
	int maior=vetor[0], menor=vetor[0];
	for(i=0; i<tam; i++)
	{
		if(vetor[i]>maior)
		{
			maior=vetor[i];
			pos_maior=i;
		}
		if(vetor[i]<menor)
		{
			menor=vetor[i];
			pos_menor=i;
		}
	}
	printf("Maior: %d na posicao: %d\nMenor: %d na posicao: %d", maior, pos_maior, menor, pos_menor);
}
