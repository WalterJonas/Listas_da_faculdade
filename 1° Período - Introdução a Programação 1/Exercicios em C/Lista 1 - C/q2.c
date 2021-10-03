// Faça um Algoritmo que receba um salário e atribua em cima do salário uma gratificação de 5% e depois atribua o imposto de 8% em cima do valor atual. 
#include<stdio.h>
int main(){
	float salario, receber, gratificacao, imposto;
	printf("SALARIO: ");
	scanf("%f", &salario);
	receber=salario+(salario*(0.05-0.08));
	printf("SALARIO A RECEBER: %f\n", receber);
	system("pause");
}
