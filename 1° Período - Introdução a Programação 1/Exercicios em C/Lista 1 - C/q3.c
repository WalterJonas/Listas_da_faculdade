//Faça um algoritmo que receba um salário e um percentual de aumento e depois e imprima o novo valor do salário. 
#include<stdio.h>
int main(){
	float salario, percentual_aument, novo_salario;
	printf("Insira o salario: ");
	scanf("%f", &salario);
	printf("Insira o percentual de aumento: ");
	scanf("%f", &percentual_aument);
	novo_salario=salario+(salario*percentual_aument)/100;
	printf("Salario novo: %f\n", novo_salario);	
	system("pause");
}
