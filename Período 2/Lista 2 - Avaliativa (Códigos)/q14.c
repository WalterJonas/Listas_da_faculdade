//Faça um programa C para calular o número de lâmpadas 60 watts necessrias para
//um determinado cômodo. O programa dever ler um conjunto de informações, tais como: tipo,
//largura e comprimento do cômodo. O programa termina quando o tipo de cômodo for igual -1. A
//tabela abaixo mostra, para cada tipo de cômodo, a quantidade de watts por metro quadrado.
//Dica: Use uma estrutura struct para agrupar logicamente as informações de um comodo (int tipo
//de comodo, float largura e float altura). Usar uma função (float CalulaArea) para calcular a rea
//do cômodo. Os atributos de entrada serão a largura e comprimento do cômodo. Usar uma função
//(float ampada) para calcular a quantidade de lâmpadas necesrias para o cômodo. Os atributos
//de entrada serão o tipo de cômodo e a metragem (em m2) do cômodo. Obs: Utilize a função ceil(numero) em #include math.h para realizar o arrendondamento para
//cima. 
//Tipo Cômodo 	Potência (watt/m2)
//0 			12
//1 			15
//2 			18
//3 			20
//4 			22
#include<stdio.h>
#include<math.h>

typedef struct comodo
{
	int tipo;
 	float largura, altura;
}comodo;
 
float calculaArea(float largura, float altura)
{
	float area;
	area=largura*altura;
 	return area;
}
float lampada(int tipo, float area)
{
	float lampadas;
	lampadas=ceil((tipo*area)/60);
	return lampadas;
}
int main()
{
	int i;
	float tipo_comodo, area, qtd;
	comodo c;
	do
	{
		printf("Tipo do comodo: ");
		scanf("%d", &c.tipo);
		if(c.tipo==-1)
		{
			break;
		}
		printf("Largura: ");
		scanf("%f", &c.largura);
		printf("Altura: ");
		scanf("%f", &c.altura);
		area=calculaArea(c.largura, c.altura);
		printf("AREA: %f\n", area);
		
		if(c.tipo==0)
		{
			tipo_comodo=12;
			qtd=lampada(tipo_comodo, area);
			printf("Quantidade de lampadas necessarias: %f\n", qtd);
		}
		if(c.tipo==1)
		{
			tipo_comodo=15;
			qtd=lampada(tipo_comodo, area);
			printf("Quantidade de lampadas necessarias: %f\n", qtd);
		}
		if(c.tipo==2)
		{
			tipo_comodo=18;
			qtd=lampada(tipo_comodo, area);
			printf("Quantidade de lampadas necessarias: %f\n", qtd);
		}
		if(c.tipo==3)
		{
			tipo_comodo=20;
			qtd=lampada(tipo_comodo, area);
			printf("Quantidade de lampadas necessarias: %f\n", qtd);
		}
		if(c.tipo==4)
		{
			tipo_comodo=22;
			qtd=lampada(tipo_comodo, area);
			printf("Quantidade de lampadas necessarias: %f\n", qtd);
		}
	}
	while(c.tipo!=-1);
}
