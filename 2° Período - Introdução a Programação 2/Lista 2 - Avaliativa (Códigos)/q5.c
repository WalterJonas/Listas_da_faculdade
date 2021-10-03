//Crie uma estrutura representando os alunos de um determinado curso. A estrutura
//deve conter a matrcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da
//terceira prova. (a) Permita ao usurio entrar com os dados de 5 alunos. (b) Encontre o aluno com maior nota da primeira prova. (c) Encontre o aluno com maior média geral. (d) Encontre o aluno com menor média geral
//(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.
#include<stdio.h>
typedef struct aluno
{
	int matricula;
	char nome[30];
	float n1, n2, n3;
}aluno;
int main()
{
	int i, n=2;
	float maior_n1=0, media[n], maior_media, menor_media;
	aluno p[n];
	for(i=0; i<n; i++)
	{
		printf("Matricula: ");
		scanf("%d", &p[i].matricula);
		printf("Nome: ");
		scanf("%s", p[i].nome);
		printf("N1: ");
		scanf("%f", &p[i].n1);
		printf("N2: ");
		scanf("%f", &p[i].n2);
		printf("N3: ");
		scanf("%f", &p[i].n3);
		media[i]=(p[i].n1 + p[i].n2 + p[i].n3)/3;
	}
	maior_media=media[0];
	menor_media=media[0];
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("Matricula: %d\n", p[i].matricula);
		printf("Nome: %s\n", p[i].nome);
		printf("N1: %f\n", p[i].n1);
		printf("N2: %f\n", p[i].n2);
		printf("N3: %f\n", p[i].n3);
		if(p[i].n1>maior_n1)
		{
			maior_n1=p[i].n1;	
		}
		if(media[i]>maior_media)
		{
			maior_media=media[i];	
		}
		if(media[i]<menor_media)
		{
			menor_media=media[i];	
		}
		if(media[i]>=6)
		{
			printf("ALUNO APROVADO!\n");
		}
		else
		{
			printf("ALUNO REPROVADO!\n");
		}
	}
	printf("\n");
	printf("Maior N1: %f\n", maior_n1);
	printf("Maior Media: %f\n", maior_media);
	printf("Menor Media: %f\n", menor_media);
}
