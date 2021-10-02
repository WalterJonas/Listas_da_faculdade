#include<stdio.h>
int main(){
	int horaAula, aulasDadas;
	float perc_desc, inss, salario_bruto, salario_liquido;
	printf("Hora Aula: ");
	scanf("%d", &horaAula);
	printf("Aulas Dadas: ");
	scanf("%d", &aulasDadas);
	printf("Percentual de desconto: ");
	scanf("%f", &perc_desc);
	salario_bruto=horaAula*aulasDadas;
	inss=salario_bruto-(salario_bruto*perc_desc)/100;
	salario_liquido=salario_bruto-inss;
	printf("Salario bruto: R$%f\n", salario_bruto);
	printf("Valor do desconto: R$%f\n", inss);
	printf("Salario liquido: R$%f\n", salario_liquido);
}
