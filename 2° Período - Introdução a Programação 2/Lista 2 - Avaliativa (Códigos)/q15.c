//A empresa i7 realizou uma pesquisa com a finalidade de descobrir o perfil dos
//clientes que adquiriu um determinado tipo de produto. Para isso, foi criado um questionario, conforme a tabela abaixo:
//Nome: Sexo: ( ) Feminino ( ) Masculino ( ) Outro
//Idade: Renda Mensal: É fumante? ( ) sim ( ) não
//Gosta de esportes? ( ) sim ( ) não
//Pratica atividade física? ( ) sim ( ) não
//Faça um programa em linguagem C utilizando o conceito referente a struct, funções e
//manipulação de arquivos, sendo capaz de realizar as seguintes operações:
//Cadastrar uma nova entrevista sempre que necessrio. Pesquisar uma das entrevistas ao fornecer o nome do entrevistado. Gerar estatísticas sobre as entrevistas:
//Percentual de homens e mulheres;
//Percentual de pessoas na faixa etria de 18 a 40 anos;
//Percentual de fumantes;
//Renda média de todos os entrevistados;
//Considere um número pequeno de entrevistas para fazer os testes.
#include<stdio.h>
typedef struct questionario
{
	char nome[30], sexo[2], fumante[2], gos_esportes[2], at_fisica[2];
	int idade;
	float renda;
}questionario;
int main()
{
	int i, n=2, op, homens=0, mulheres=0, dq=0, fumante=0, soma_renda=0;
	questionario q[n];
	char busca[30];
	while(1)
	{
		printf("1 - Cadastrar\n2 - Pesquisar\n3 - Gerar estatisticas\nOpcao: ");
		scanf("%d", &op);
		if(op==1)
		{
			for(i=0; i<n; i++)
			{
				printf("Nome: ");
				scanf("%s", q[i].nome);
				printf("Sexo(m ou f): ");
				scanf("%s", q[i].sexo);
				printf("idade: ");
				scanf("%d", &q[i].idade);
				printf("Renda Mensal: ");
				scanf("%f", &q[i].renda);
				printf("Eh fumante? ");
				scanf("%s", q[i].fumante);
				printf("Gosta de esportes? ");
				scanf("%s", q[i].gos_esportes);
				printf("Pratica atividade fisica? ");
				scanf("%s", q[i].at_fisica);
				if(strcmp("m", q[i].sexo)==0)
				{
					homens++;
				}
				else if(strcmp("f", q[i].sexo)==0)
				{
					mulheres++;
				}
				if(q[i].idade>=18 && q[i].idade<=40)
				{
					dq++;
				}
				if(strcmp("s", q[i].fumante)==0)
				{
					fumante++;
				}
				soma_renda=soma_renda+q[i].renda;
			}	
		}
		else if(op==2)
		{
			printf("Insira um nome: ");
			scanf("%s", &busca);
			for(i=0; i<n; i++)
			{
				if(strcmp(busca, q[i].nome)==0)	
				{
					printf("Nome: %s\n", q[i].nome);
					printf("Sexo: %s\n", q[i].sexo);
					printf("Idade: %d\n", q[i].idade);
					printf("Renda mensal: %f\n", q[i].renda);
					printf("Eh fumante: %s\n", q[i].fumante);
					printf("Gosta de esportes?: %s\n", q[i].gos_esportes);
					printf("Pratica atividade fisica?: %s\n", q[i].at_fisica);	
				}
			}
		}
		else if(op==3)
		{
			float percentual_h, percentual_m, percentual_dq, percentual_fu, renda_media;	
			percentual_h=(homens*100)/n;
			percentual_m=(mulheres*100)/n;
			percentual_dq=(dq*100)/2;
			percentual_fu=(fumante*100)/n;
			renda_media=soma_renda/n;
			printf("Percentual de homens: %f\nPercentual de mulheres: %f\n", percentual_h, percentual_m);
			printf("Percentual entre 18 a 40 anos: %f\n", percentual_dq);
			printf("Percentual dos fumantes: %f\n", percentual_fu);
			printf("Renda media dos entrevistados: %f\n", renda_media);
		}
	}
}
