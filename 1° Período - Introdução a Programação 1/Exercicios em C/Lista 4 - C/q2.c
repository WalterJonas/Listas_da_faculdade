//Considere a seguinte situação: descontam-se inicialmente 10% do salário bruto do trabalhador
//como contribuição à previdência social. Após esse desconto, há um outro desconto de 5% sobre o valor restante
//do salário bruto, a título de um determinado imposto. Faça um algoritmo que leia o salário bruto de um cidadão
//e imprima o seu salário líquido.

#include<stdio.h>
int main(){
	float salario, desc1, desc2;
	printf("Insira o salario: ");
	scanf("%f", &salario);
	desc1=salario-(salario*0.10);
	desc2=desc1-(desc1*0.05);
	printf("Salário líquido: %f\n", desc2);
}
