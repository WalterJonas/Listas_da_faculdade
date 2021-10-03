//Construa uma estrutura aluno com nome, número de matrcula e curso. eia do
//usuario a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela
#include<stdio.h>
typedef struct pessoa
{
	char nome[30];
	int idade;
	char endereco[30]; 
}pessoa;
int main()
{
	int i, n=3;
	pessoa p[n];
	for(i=0; i<n; i++)
	{
		printf("Nome: ");
		scanf("%s", p[i].nome);
		printf("Idade: ");
		scanf("%d", &p[i].idade);
		printf("Endereco: ");
		scanf("%s", p[i].endereco);
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("Nome: %s\n", p[i].nome);
		printf("Idade: %d\n", p[i].idade);
		printf("Endereco: %s\n", p[i].endereco);
	}
}
