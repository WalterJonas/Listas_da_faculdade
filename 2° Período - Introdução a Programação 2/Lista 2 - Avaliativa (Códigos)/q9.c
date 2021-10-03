//Faça um programa em C para ler e manipular informações de um cadastro de
//automóveis. São necessrias duas estruturas: carro e proprietario. Todos os dados de um carro
//devem ser lidos e depois impressos. Os campos das estruturas são:
//carro: modelo (char), ano (int), placa (char), proprietario (proprietario);
//proprietario: cpf (long int), nome (char).
#include<stdio.h>
typedef struct proprietario
{
	char nome[30];
	int cpf;
}proprietario;
typedef struct carro
{
	char modelo[30], placa[7];
	int ano;
	proprietario prop;
}carro;
int main()
{
	carro c;
	printf("Modelo: ");
	scanf("%s", c.modelo);
	printf("Placa: ");
	scanf("%s", c.placa);
	printf("Ano: ");
	scanf("%d", &c.ano);
	printf("Nome do Proprietario: ");
	scanf("%s", c.prop.nome);
	printf("Cpf do propritario: ");
	scanf("%d", &c.prop.cpf);
	printf("\n");
	printf("Modelo: %s\n", c.modelo);
	printf("Placa: %s\n", c.placa);
	printf("Ano: %d\n", c.ano);
	printf("Nome do proprietario: %s\n", c.prop.nome);
	printf("Cpf do propritario: %d\n", c.prop.cpf);
}
