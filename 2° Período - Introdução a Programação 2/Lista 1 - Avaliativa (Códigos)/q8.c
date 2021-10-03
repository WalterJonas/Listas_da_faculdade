//Crie um programa para sortear 50 números inteiros usando a função rand()
//armazenando-os em um vetor A. Verifique a quantidade de números e ímpares. Depois crie dois
//vetores B e C, para armazenas os valores pares no vetor B e os ímpares no vetor C. No final, mostre os valores dos vetores B e C.
#include<stdio.h>
int main()
{
	int i, t=5, vetorA[t], vetorB[t], vetorC[t], impar=0, par=0, imp=0;
	for(i=0; i<t; i++)
	{
		vetorA[i]=1+rand()%30;
		if(vetorA[i]%2!=0)
		{
			impar++;	
		}
	}
	for(i=0; i<t; i++)
	{
		printf("Vetor A: %d\n", vetorA[i]);
	}
	printf("Quantidade de impares: %d\n", impar);
	for(i=0; i<t; i++)
	{
		if(vetorA[i]%2==0)
		{
			vetorB[i]=vetorA[i];
			printf("Vetor B: %d\n", vetorB[i]);
		}
		else if(vetorA[i]%2!=0)
		{
			vetorC[i]=vetorA[i];
			printf("Vetor C: %d\n", vetorC[i]);
		}
	}
}
