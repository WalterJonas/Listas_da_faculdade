//Crie uma função que preencha um vetor com números sorteados, mantendo-o ordenado. Forneça a
//maior diferença entre duas componentes consecutivas, como também as ordens das componentes que geraram
//esta maior diferença. Por exemplo, se o vetor dado for v = {3, 5, 9, 16, 17, 20, 26, 31}, a função deve fornecer
//como maior diferença o valor 7 (16 - 9) e as ordens 4 e 3.

#include<stdio.h>
#include <stdlib.h>
void preenche(int vetor[], int t)
{
	int i;
	for(i=0; i<t; i++)
	{
		//printf("N: ");
		//scanf("%d", &vetor[i]);
		vetor[i]=1+rand()%1000;
	}
}
void ordena(int vetor[], int t)
{
	int i, j, aux, menor;
	for(i=0; i<t-1; i++)
	{
		menor=i;
		for(j=i+1; j<t; j++)
		{
			if(vetor[i]>vetor[j])
			{
				menor=j;
			}

		}
		if(menor != i)
		{
			aux=vetor[i];
			vetor[i]=vetor[menor];
			vetor[menor]=aux;
		}
	}
}
void mostra(int vetor[], int t)
{
	int i, dif, maior=0, posicao_2, posicao_1;
	printf("\n");
	for(i=0; i<t; i++)
	{
		printf("%d\n", vetor[i]);
		if(i>0)
		{
			dif=vetor[i]-vetor[i-1];
			printf("DIFERENCA: %d\n", dif);
			if(dif>maior)
			{
				maior=dif;
				posicao_2=i;
				posicao_1=i-1;
			}
		}
	}
	printf("MAIOR DIFERENCA: %d nos indices: %d e %d\n", maior, posicao_1, posicao_2);
}

int main()
{
	int t=5, vetor[t];
	preenche(vetor, t);
	ordena(vetor, t);
	mostra(vetor, t);
}
