// Fa�a um Algoritmo que receba um sal�rio e atribua em cima do sal�rio uma gratifica��o de 5% e depois atribua o imposto de 8% em cima do valor atual. 
#include<stdio.h>
int main(){
	float salario, receber, gratificacao, imposto;
	printf("SALARIO: ");
	scanf("%f", &salario);
	receber=salario+(salario*(0.05-0.08));
	printf("SALARIO A RECEBER: %f\n", receber);
	system("pause");
}
