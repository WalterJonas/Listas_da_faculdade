//Crie um programa que preencha um vetor com 50 números inteiros. Calcule e mostre
//a quantidade de valores pares presentes no vetor.

#include<stdio.h>

int main()
{
	int tam=5, vetor[tam], i, par=0;
	for(i=0; i<tam; i++)
	{
		scanf("%d", &vetor[i]);
		if(vetor[i]%2==0)
		{
			par++;
		}
	}
	printf("Quantidade de pares: %d\n", par);
	system("pause");
}
