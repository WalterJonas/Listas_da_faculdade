//Crie uma função para preencher um vetor A com 10 valores reais. Na função main, leia do usuário
//um valor qualquer x e crie um novo vetor B. Por meio de uma nova função, este vetor B deve ser resultante da
//multiplicação de x por cada valor do vetor preenchido. Crie uma função para exibir os vetores A e B. Faça o
//teste das funções na função main. Protótipo das funções:
//void preenche_vetor(int v[ ], int t);
//void imprime_vetor(int v[ ], int t);
//void calcula(int v[ ], int t, int valor); //valor - refere-se ao valor lido pelo usuário

#include<stdio.h>

void preencheA(float vetor[], int t)
{
	int i;
	for(i=0; i<t; i++)
	{
		printf("Preencha: ");
		scanf("%f", &vetor[i]);	
	}
}
void mostraA(float vetor[], int t)
{
	int i;
	printf("Vetor A \n");
	for(i=0; i<t; i++)
	{
		printf("%0.1f\n", vetor[i]);
	}
}

void calculaB(float vetor[], int t, int x)
{
	int i;
	printf("Vetor B \n");
	for(i=0; i<t; i++)
	{
		vetor[i]=vetor[i]*x;
		printf("%0.1f\n", vetor[i]);
	}
}
int main()
{
	int t=5, x;
	float vetor[t];
	preencheA(vetor, t);
	printf("Insira um numero: ");
	scanf("%d", &x);
	mostraA(vetor, t);	
	calculaB(vetor, t, x);
}
