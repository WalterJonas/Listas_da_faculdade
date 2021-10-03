//O IMC – Indice de Massa Corporal é um critério da Organização Mundial de Saúde para dar
//uma indicação sobre a condição de peso de uma pessoa adulta. A fórmula é IMC = peso/(altura)2. Elabore um
//algoritmo que leia o peso e a altura de um adulto e mostre sua condição de acordo com a tabela abaixo. IMC em adultos Condição
//Abaixo de 18,5 Abaixo do peso
//Entre 18,5 e 25 Peso normal
//Entre 25 e 30 Acima do peso
//Acima de 30 obeso.

#include<stdio.h>
int main(){
	float altura, peso, imc;
	printf("Insira a altura: ");
	scanf("%f", &altura);
	printf("Insira o peso: ");
	scanf("%f", &peso);
	imc=peso/(altura*altura);
	if(imc<18.5)
	    printf("Abaixo do peso");
	else if(imc>=18.5 && imc<=25)
	    printf("Peso normal");
	else if(imc>=25 && imc<=30)
	    printf("Acima do peso");
	else if(imc>30)
	    printf("Obeso");	
}
