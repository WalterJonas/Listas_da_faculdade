//Fa�a um programa em C contendo uma fun��o que conte a quantidade de n�meros repetidos
//contidos em um vetor. A fun��o deve receber um vetor de inteiros (vet), alocado dinamicamente, e
//uma vari�vel inteira (quant), para contar a quantidade de n�meros repetidos. Utilize passagem por
//refer�ncia para alterar o valor da vari�vel (quant).

#include <stdio.h>
#include <stdlib.h>

void inserir(int *vet, int tam) //Fun��o para inserir os elementos no vetor
{
	int i;
	for(i=0; i<tam; i++)
	{
		printf("Insira Valores: ");
		scanf("%d", &vet[i]); //Insere os elementos no vetor
	}
}

void contar(int *vet, int *quant, int tam) //Fun��o para contar a quantidade de n�meros repetidos dentro do vetor
//A fun��o recebe a variavel "quant" como referencia
{
	int i, j;
	for(i=0; i<tam; i++)
	{
		for(j=i+1; j<tam; j++)
		{
			if(vet[i]==vet[j])
			{
				*quant=*quant+1; //Altera��o da variavel "quant"
			}
		}	
	}
}

int main()
{
	int *vet, quant=0, tam=5, i;
	vet = malloc(sizeof(int)*tam); //Faz aloca��o dinamica
	if(vet)
	{
		inserir(vet, tam);	
	}
	contar(vet, &quant, tam); //Passagem por referencia
	printf("\nQuantidade de repetidos: %d", quant);
}
