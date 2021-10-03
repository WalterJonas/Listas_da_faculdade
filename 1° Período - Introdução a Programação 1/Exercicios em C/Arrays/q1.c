//Crie uma fun��o para preencher um vetor A com 10 valores reais. Na fun��o main, leia do usu�rio
//um valor qualquer x e crie um novo vetor B. Por meio de uma nova fun��o, este vetor B deve ser resultante da
//multiplica��o de x por cada valor do vetor preenchido. Crie uma fun��o para exibir os vetores A e B. Fa�a o
//teste das fun��es na fun��o main. Prot�tipo das fun��es:
//void preenche_vetor(int v[ ], int t);
//void imprime_vetor(int v[ ], int t);
//void calcula(int v[ ], int t, int valor); //valor - refere-se ao valor lido pelo usu�rio

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
