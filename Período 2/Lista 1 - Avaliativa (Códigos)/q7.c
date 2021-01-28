//Crie um programa que preencha um vetor A com 30 números inteiros, usando a
//função rand(). Preencha o vetor B com os valores de A, em ordem crescente. Mostre o vetor A e
//depois o B. 

#include<stdio.h>

int main()
{

	int i, j, aux, menor, t=5, vetorA[t], vetorB[t];
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
		vetorB[i]=vetorA[i];
		printf("Vetor B: %d\n", vetorB[i]);
	}
}

