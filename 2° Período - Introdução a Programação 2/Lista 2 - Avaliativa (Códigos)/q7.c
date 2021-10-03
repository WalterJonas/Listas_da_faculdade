//Faça um programa que leia um vetor com dados de 5 livros: ttulo (mximo 30
//letras), autor (mximo 15 letras) e ano. Procure um livro por ttulo, perguntando ao usurio qual
//ttulo deseja buscar. ostre os dados de todos os livros encontrados
#include<stdio.h>
#include<string.h>
typedef struct livro
{
	char titulo[30], autor[15];
	int ano;
}livro;
int main()
{
	int i, n=2;
	char busca[30];
	livro l[n];
	for(i=0; i<n; i++)
	{
		printf("Titulo: ");
		scanf("%s", l[i].titulo);
		printf("Autor: ");
		scanf("%s", l[i].autor);
		printf("Ano: ");
		scanf("%d", &l[i].ano);
	}
	printf("\n");
	printf("Insira a busca: ");
	scanf("%s", &busca);
	for(i=0; i<n; i++)
	{
		if(strcmp(busca, l[i].titulo)==0)
		{
			printf("Titulo: %s\n", l[i].titulo);
			printf("Autor: %s\n", l[i].autor);				
			printf("Ano: %d\n", l[i].ano);
		}
	}	
}
