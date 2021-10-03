//Fazer um programa para simular uma agenda de telefones. Para cada pessoa devem-se ter os seguintes dados:
//� Nome
//� E-mail
//� Endere�o (contendo campos para Rua, n�mero, complemento, bairro, cep, cidade, estado, pas). � Telefone (contendo campo para DDD e n�mero)
//� Data de aniversrio (contendo campo para dia, m�s, ano). 
//� Observa��es: Uma linha (string) para alguma observa��o especial.
	//(a) Definir a estrutura acima. 
	//(b) Declarar a varivel agenda (vetor) com capacidade de agendar at� 100 nomes. 
	//(c) Definir um bloco de instru��es busca por primeiro nome: Imprime os dados da pessoa com esse nome (se tiver mais de uma pessoa, imprime para todas). 
	//(d) Definir um bloco de instru��es busca por m�s de aniversrio: Imprime os dados de todas as pessoas que fazem aniversrio nesse m�s. 
	//(e) Definir um bloco de instru��es busca por dia e m�s de aniversrio: Imprime os dados de todas as pessoas que fazem aniversrio nesse dia e m�s. 
	//(f) Definir um bloco de instru��es insere pessoa: Insere por ordem alfab�tica de nome. 
	//(g) Definir um bloco de instru��es retira pessoa: Retira todos os dados dessa pessoa e desloca todos os elementos seguintes do vetor para a posi��o anterior. 
	//(h) Definir um bloco de instru��es imprime agenda com as op��es:
	//� Imprime nome, telefone e e-mail. 
	//� Imprime todos os dados. 
	//(i) O programa deve ter um menu principal oferecendo as op��es acima.
#include<stdio.h>
typedef struct agenda
{
	char nome[30], email[30], rua[30], complemento[30], bairro[30], cidade[30], estado[30], pais[30], obs[30];
	int numero, cep, telefone, dia_aniversario, mes_aniversario, ano_aniversario;
}agenda;
int main()
{
	int i, n=2, op, dia, mes;
	char busca[30];
	agenda e[n];
	while(1)
	{
		printf("1 - Cadastrar\n2 - Buscar por nome\n3 - Buscar por Mes\n4 - Buscar por dia e mes\n",
		"5 - Imprimir (Nome, Telefone e Email)\n6 - Imprimir todos os dados\n0 - Sair\nOpcao: ");
		scanf("%d", &op);
		if(op==1)
		{
			for(i=0; i<n; i++)
			{
				printf("Nome: ");
				scanf("%s", e[i].nome);
				printf("Email: ");
				scanf("%s", e[i].email);
				printf("Rua: ");
				scanf("%s", e[i].rua);
				printf("Numero: ");
				scanf("%d", &e[i].numero);
				printf("Complemento: ");
				scanf("%s", e[i].complemento);
				printf("Bairro: ");
				scanf("%s", e[i].bairro);
				printf("Cep: ");
				scanf("%d", &e[i].cep);
				printf("Cidade: ");
				scanf("%s", e[i].cidade);
				printf("Estado: ");
				scanf("%s", e[i].estado);
				printf("Pais: ");
				scanf("%s", e[i].pais);
				printf("Telefone: ");
				scanf("%d", &e[i].telefone);
				printf("Dia do aniversario: ");
				scanf("%d", &e[i].dia_aniversario);
				printf("Mes do aniversario: ");
				scanf("%d", &e[i].mes_aniversario);
				printf("Ano do aniversario: ");
				scanf("%d", &e[i].ano_aniversario);
				printf("Observacao: ");
				scanf("%s", e[i].obs);
			}
		}
		else if(op==2)
		{
			printf("Insira um nome: ");
			scanf("%s", &busca);
			for(i=0; i<n; i++)
			{
				if(strcmp(busca, e[i].nome)==0)
				{
					printf("Nome: %s\n", e[i].nome);
					printf("Email: %s\n", e[i].email);
					printf("Rua: %s\n", e[i].rua);
					printf("Numero: %d\n", e[i].numero);
					printf("Complemento: %s\n", e[i].complemento);
					printf("Bairro: %s\n", e[i].bairro);
					printf("Cep: %d\n", e[i].cep);
					printf("Cidade: %s\n", e[i].cidade);
					printf("Estado: %s\n", e[i].estado);
					printf("Pais: %s\n", e[i].pais);
					printf("Telefone: %d\n", e[i].telefone);
					printf("Dia do aniversario: %d\n", e[i].dia_aniversario);
					printf("Mes do aniversario:  %d\n", e[i].mes_aniversario);
					printf("Ano do aniversario: %d\n", e[i].ano_aniversario);
					printf("Observacao: %s\n", e[i].obs);
				}
			}
		}
		else if(op==3)
		{
			//printf("Insira o dia: ");
			//scanf("%d", &dia);
			printf("Insira o mes: ");
			scanf("%d", &mes);
			for(i=0; i<n; i++)
			{
				if(mes==e[i].mes_aniversario)
				{
					printf("Nome: %s\n", e[i].nome);
					printf("Email: %s\n", e[i].email);
					printf("Rua: %s\n", e[i].rua);
					printf("Numero: %d\n", e[i].numero);
					printf("Complemento: %s\n", e[i].complemento);
					printf("Bairro: %s\n", e[i].bairro);
					printf("Cep: %d\n", e[i].cep);
					printf("Cidade: %s\n", e[i].cidade);
					printf("Estado: %s\n", e[i].estado);
					printf("Pais: %s\n", e[i].pais);
					printf("Telefone: %d\n", e[i].telefone);
					printf("Dia do aniversario: %d\n", e[i].dia_aniversario);
					printf("Mes do aniversario:  %d\n", e[i].mes_aniversario);
					printf("Ano do aniversario: %d\n", e[i].ano_aniversario);
					printf("Observacao: %s\n", e[i].obs);
				}
			}
		}
		else if(op==4)
		{
			printf("Insira o dia: ");
			scanf("%d", &dia);
			printf("Insira o mes: ");
			scanf("%d", &mes);
			for(i=0; i<n; i++)
			{
				if(dia==e[i].dia_aniversario && mes==e[i].mes_aniversario)
				{
					printf("Nome: %s\n", e[i].nome);
					printf("Email: %s\n", e[i].email);
					printf("Rua: %s\n", e[i].rua);
					printf("Numero: %d\n", e[i].numero);
					printf("Complemento: %s\n", e[i].complemento);
					printf("Bairro: %s\n", e[i].bairro);
					printf("Cep: %d\n", e[i].cep);
					printf("Cidade: %s\n", e[i].cidade);
					printf("Estado: %s\n", e[i].estado);
					printf("Pais: %s\n", e[i].pais);
					printf("Telefone: %d\n", e[i].telefone);
					printf("Dia do aniversario: %d\n", e[i].dia_aniversario);
					printf("Mes do aniversario:  %d\n", e[i].mes_aniversario);
					printf("Ano do aniversario: %d\n", e[i].ano_aniversario);
					printf("Observacao: %s\n", e[i].obs);
				}
			}	
		}
		else if(op==5)
		{
			for(i=0; i<n; i++)
			{
				printf("Nome: %s\n", e[i].nome);
				printf("Telefone: %d\n", e[i].telefone);
				printf("Email: %s\n", e[i].email);
			}
		}
		else if(op==6)
		{
			for(i=0; i<n; i++)
			{
				printf("Nome: %s\n", e[i].nome);
				printf("Email: %s\n", e[i].email);
				printf("Rua: %s\n", e[i].rua);
				printf("Numero: %d\n", e[i].numero);
				printf("Complemento: %s\n", e[i].complemento);				
				printf("Bairro: %s\n", e[i].bairro);
				printf("Cep: %d\n", e[i].cep);
				printf("Cidade: %s\n", e[i].cidade);
				printf("Estado: %s\n", e[i].estado);
				printf("Pais: %s\n", e[i].pais);
				printf("Telefone: %d\n", e[i].telefone);
				printf("Dia do aniversario: %d\n", e[i].dia_aniversario);
				printf("Mes do aniversario:  %d\n", e[i].mes_aniversario);
				printf("Ano do aniversario: %d\n", e[i].ano_aniversario);
				printf("Observacao: %s\n", e[i].obs);
			}
		}
	}
}
