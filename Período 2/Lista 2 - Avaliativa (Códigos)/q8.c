//Construa um programa em C para ler e manipular informações de um cadastro de
//clientes. São necessrias duas estruturas: cliente e endereco. Todos os dados de um cliente
//devem ser lidos e depois impressos. Os campos das estruturas são:
//cliente: matricula (int), nome (char), endereço (endereco);
//endereco: logradouro (char), numero (int), bairro (char), cep (long int).
#include<stdio.h>
typedef struct endereco
{
	char logradouro[30], bairro[30];
	int numero, cep;
}endereco;
typedef struct cliente
{
	int matricula;
	char nome[30];
	endereco end;
}cliente;

int main()
{
	cliente c;
	printf("Matricula: ");
	scanf("%d", &c.matricula);
	printf("Nome: ");
	scanf("%s", c.nome);
	printf("Logradouro: ");
	scanf("%s", c.end.logradouro);
	printf("Bairro: ");
	scanf("%s", c.end.bairro);
	printf("Numero: ");
	scanf("%d", &c.end.numero);
	printf("Cep: ");
	scanf("%d", &c.end.cep);
	printf("\n");
	printf("Matricula: %d\n", c.matricula);
	printf("Nome: %s\n", c.nome);
	printf("Logradouro: %s\n", c.end.logradouro);
	printf("Bairro: %s\n", c.end.bairro);
	printf("Numero: %d\n", c.end.numero);
	printf("Cep: %d\n", c.end.cep);
}
