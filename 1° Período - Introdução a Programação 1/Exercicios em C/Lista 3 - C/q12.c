//Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o desconto no INSS, de
//acordo com a tabela a seguir:
//Menor ou igual a R$ 600,00 isento
//Maior que R$ 600,00 e menor ou igual a R$ 1200,00 20%
//Maior que R$ 1200,00 e menor ou igual a R$ 2000,00 25%
//Maior que R$ 2000,00 30%

#include<stdio.h>
int main(){
	float salario, inss;
	printf("Insira o salario: ");
	scanf("%f", &salario);
	if(salario<=600){
		printf("Isento");
	}
	else if(salario>600 && salario<=1200){
		inss=salario-(salario*0.20);
	    printf("Salário com o desconto do INSS: %f\n", inss);
	}
	else if(salario>1200 && salario<=2000){
		inss=salario-(salario*0.25);
	    printf("Salário com o desconto do INSS: %f\n", inss);
	}
	else if(salario>2000){
		inss=salario-(salario*0.30);
	    printf("Salário com o desconto do INSS: %f\n", inss);	
	}   
}
