//Crie um programa que preencha um vetor A com 30 valores e leia do usu�rio um
//valor k. Fa�a a multiplica��o dos valores do vetor A pela vari�vel k e armazene num vetor B. Mostre o resultado.
#include <stdio.h>

int main()
{
	int tam=5, vetorA[tam], vetorB[tam], i, k;
	for(i=0; i<tam; i++)
	{
		printf("Preecha A: ");
		scanf("%d", &vetorA[i]);
	}
	printf("Insira o valor K: ");
	scanf("%d", &k);
	for(i=0; i<tam; i++)
	{
		vetorB[i]=vetorA[i]*k;
		printf("Vetor B: %d\n", vetorB[i]);
	}
}
