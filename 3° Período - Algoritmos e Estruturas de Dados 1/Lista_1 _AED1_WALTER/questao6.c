//Faça um programa em C contendo uma função que conte a quantidade de números repetidos
//contidos em um vetor. A função deve receber um vetor de inteiros (vet), alocado dinamicamente, e
//uma variável inteira (quant), para contar a quantidade de números repetidos. Utilize passagem por
//referência para alterar o valor da variável (quant).

#include <stdio.h>
#include <stdlib.h>

void inserir(int *vet, int tam) //Função para inserir os elementos no vetor
{
	int i;
	for(i=0; i<tam; i++)
	{
		printf("Insira Valores: ");
		scanf("%d", &vet[i]); //Insere os elementos no vetor
	}
}

void contar(int *vet, int *quant, int tam) //Função para contar a quantidade de números repetidos dentro do vetor
//A função recebe a variavel "quant" como referencia
{
	int i, j;
	for(i=0; i<tam; i++)
	{
		for(j=i+1; j<tam; j++)
		{
			if(vet[i]==vet[j])
			{
				*quant=*quant+1; //Alteração da variavel "quant"
			}
		}	
	}
}

int main()
{
	int *vet, quant=0, tam=5, i;
	vet = malloc(sizeof(int)*tam); //Faz alocação dinamica
	if(vet)
	{
		inserir(vet, tam);	
	}
	contar(vet, &quant, tam); //Passagem por referencia
	printf("\nQuantidade de repetidos: %d", quant);
}
