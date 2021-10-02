//Faça um algoritmo que leia o nome do vendedor, o Salario do vendedor e o total de vendas no mês e imprima o total a receber.
#include<stdio.h>
int main(){
	char nome;
	int vendas;
	float salario, total_receber;
	printf("Insira o nome do vendedor: ");
	scanf("%s", &nome);
	printf("Salario do vendedor: ");
	scanf("%f", &salario);
	printf("Insira o total de vendas no mês(em dinheiro): ");
	scanf("%d", &vendas);
	total_receber=(vendas*0.15)+salario;
	printf("Nome do vendedor: %s\n", nome);
	printf("Total a receber: R$%f\n", total_receber);
}
