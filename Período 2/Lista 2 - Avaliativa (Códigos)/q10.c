//Elabore um programa em C para ler e manipular informações de um cadastro de
//alunos. São necessrias três estruturas: aluno, disciplina e professor. Todos os dados de um
//aluno devem ser lidos e depois impressos. Os campos das estruturas são:
//aluno: matricula (int), nome (char), disciplina (disciplina);
//disciplina: codigo (int), nome (char), professor (professor);
//professor: cpf (long int), nome (char).
#include<stdio.h>
typedef struct professor
{
	char nome[30];
	int cpf;
}professor;

typedef struct disciplina
{
	int codigo;
	char nome[30];
	professor prof;
}disciplina;

typedef struct aluno
{
	int matricula;
	char nome[30];
	disciplina dis;
}aluno;

int main()
{
	aluno a;
	disciplina d;
	printf("Matricula do aluno: ");
	scanf("%d", &a.matricula);
	printf("Nome do aluno: ");
	scanf("%s", a.nome);
	printf("Codigo da disciplina: ");
	scanf("%d", &a.dis.codigo);
	printf("Disciplina: ");
	scanf("%s", a.dis.nome);
	printf("Professor: ");
	scanf("%s", d.prof.nome);
	printf("Cpf do professor : ");
	scanf("%d", &d.prof.cpf);
	printf("\n");
	printf("Matricula: %d\n", a.matricula);
	printf("Nome do aluno: %s\n", a.nome);
	printf("Codigo da disciplina: %d\n", a.dis.codigo);
	printf("Disciplina: %s\n", a.dis.nome);
	printf("Professor: %s\n", d.prof.nome);
	printf("Cpf: %d\n", d.prof.cpf);
}
