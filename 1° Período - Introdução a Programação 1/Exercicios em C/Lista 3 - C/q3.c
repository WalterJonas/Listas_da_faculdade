//Uma companhia de carros paga a seus empregados um salário de R$ 500,00 por mês mais uma
//comissão de R$ 50,00 para cada carro vendido e mais 5% do valor da venda. Elabore um algoritmo para calcular e
//imprimir o salário do vendedor num dado mês recebendo como dados de entrada o nome do vendedor, o número de
//carros vendidos e o valor total das vendas.

#include<stdio.h>
int main(){
	int carros_vendidos;
	float total_vendas, salario;
	printf("Insira a quantidade de carros vendidos: ");
	scanf("%d", &carros_vendidos);
	printf("Insira o valor total das vendas: ");
	scanf("%f", &total_vendas);
	salario=500+(carros_vendidos*50)+total_vendas*0.05;
	printf("SALÁRIO DO MÊS: %f", salario);
}
