//Considere um vetor com 10 elementos reais. Crie uma função que calcule e mostre a
//diferença entre o maior e o menor elemento existente, bem como as posições que os mesmos ocupam
//no vetor.

#include<stdio.h>

void preenche(float vetor[], int t)
{
	int i;
	for(i=0; i<t; i++)
	{
		printf("N: ");
		scanf("%f", &vetor[i]);	
	}
}
void calcular(float vetor[], int t)
{
	int i, posicao_maior, posicao_menor;
	float maior=vetor[0], menor=vetor[0];
	for(i=0; i<t; i++)
	{
		printf("%0.1f\n", vetor[i]);
		if(vetor[i]>maior)
		{
			maior=vetor[i];
			posicao_maior=i;
		}
		if(vetor[i]<menor)
		{
			menor=vetor[i];
			posicao_menor=i;
		}
	}
	printf("\nMAIOR: %0.1f na posicao %d\nMENOR: %0.1f na posicao %d\n", maior, posicao_maior, menor, posicao_menor);
	printf("Diferenca do maior para o menor: %0.1f\n", maior-menor);
}
int main()
{
	int t=5;
	float vetor[t];
	preenche(vetor, t);
	calcular(vetor, t);
}
