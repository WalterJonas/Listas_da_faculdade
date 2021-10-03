//Crie um programa que preencha, com a função rand(), um vetor com 100 valores. Ordene os valores do vetor em ordem crescente e mostre o resultado

#include<stdio.h>
int main()
{

	int i, j, aux, menor, t=5, vetorA[t];
	for(i=0; i<t; i++)
	{
		vetorA[i]=1+rand()%6;
		//scanf("%d", &vetorA[i]);
	}
	for(i=0; i<t; i++)
	{
		printf("Vetor A: %d\n", vetorA[i]);
	}
	for(i=0; i<t-1; i++)
	{
		menor=i;
		for(j=i+1; j<t; j++)
		{
			if(vetorA[i]>vetorA[j])
			{
				menor=j;
			}	
		}
		if(menor != i)
		{
			aux=vetorA[i];
			vetorA[i]=vetorA[menor];
			vetorA[menor]=aux;
		}
	}	
	for(i=0; i<t; i++)
	{
		printf("Vetor ORDENADO: %d\n", vetorA[i]);
	}
}

