//Considere a seguinte situa��o: descontam-se inicialmente 10% do sal�rio bruto do trabalhador
//como contribui��o � previd�ncia social. Ap�s esse desconto, h� um outro desconto de 5% sobre o valor restante
//do sal�rio bruto, a t�tulo de um determinado imposto. Fa�a um algoritmo que leia o sal�rio bruto de um cidad�o
//e imprima o seu sal�rio l�quido.

#include<stdio.h>
int main(){
	float salario, desc1, desc2;
	printf("Insira o salario: ");
	scanf("%f", &salario);
	desc1=salario-(salario*0.10);
	desc2=desc1-(desc1*0.05);
	printf("Sal�rio l�quido: %f\n", desc2);
}
