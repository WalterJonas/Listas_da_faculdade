//Crie um algoritmo que leia dois vetores de 200 números inteiros. A seguir, troque o
//1º elemento de A com o 200º de B, o 2º de A com o 199º de B, assim por diante, até trocar o
//200º de A com o 1º de B. Mostre os vetores antes e depois da troca.

#include<stdio.h>
int main()
{
	int i, j, tam=5, vetorA[tam], vetorB[tam], aux[tam];
	for (i = 0; i < tam; i++)
	{
		printf("Preencha o vetor A: ");
    	scanf("%d", &vetorA[i]);
    }
	for (j = 0; j <tam; j++)
	{
		printf("Preencha o vetor B: ");
    	scanf("%d", &vetorB[j]);
    }
	for(i=0, j=tam-1; i<tam, j>=0; i++, j--)
	{
		printf("%d\t%d\n", vetorA[i], vetorB[j]);
	}
	for (i=0, j=tam-1; i<tam, j>=0; i++, j--)
	{
		aux[i]=vetorA[i];
		vetorA[i]=vetorB[j];
        printf("Vetor A: %d\n", vetorA[i]);
    }
    for (j=0, i=tam-1; j<tam, i>=0; j++, i--)
	{
		vetorB[j]=aux[i];
        printf("Vetor B: %d\n", vetorB[j]);
    }
}
