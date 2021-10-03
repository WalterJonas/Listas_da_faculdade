//Crie um algoritmo que receba nome, sexo (M ou F) e idade de uma pessoa. Se a pessoa for do sexo
//feminino e tiver menos do que 25 anos, imprimir seu nome e a mensagem: “Aceita!”. Caso contrário, imprimir o nome
//e a mensagem: “Não aceita!”.

#include<stdio.h>
int main(){
	char sexo;
	char nome[10];
	int idade;
	printf("Nome: ");
	scanf("%s", &nome);
	printf("Insira M(para masculino) e F(para feminino: ");
	scanf("%s", &sexo);
	printf("Insira a idade: ");
	scanf("%d", &idade);
	if(sexo=="F" && idade<25)
	{
		printf("ACEITA!");
	}   
	else
	{
		printf("NÃO ACEITA!");
	}	    
}
