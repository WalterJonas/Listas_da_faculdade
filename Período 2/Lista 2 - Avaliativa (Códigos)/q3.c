//Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
//armazene os dados em uma estrutura.
#include<stdio.h>
typedef struct pessoa
{
	char nome[30];
	int idade;
	char endereco[30]; 
}pessoa;
int main()
{
	pessoa p;
	printf("Nome: ");
	scanf("%s", p.nome);
	printf("Idade: ");
	scanf("%d", &p.idade);
	printf("Endereco: ");
	scanf("%s", p.endereco);
	printf("\n");
	printf("Nome: %s\n", p.nome);
	printf("Idade: %d\n", p.idade);
	printf("Endereco: %s\n", p.endereco);	
}
