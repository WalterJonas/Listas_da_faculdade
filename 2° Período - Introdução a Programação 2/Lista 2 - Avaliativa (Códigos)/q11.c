//Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa e:
//• Crie e leia 5 eletrodomésticos que contém nome (maximo 15 letras), potência (real, em kW) e
//tempo ativo por dia (real, em horas). 
//• leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de
//cada eletrodoméstico (consumo/consumo total) nesse perodo de tempo. Apresente este último dado em porcentagem.
#include<stdio.h>
typedef struct eletro
{
	char nome[15];
	float potencia, tempo_hora;
}eletro;
int main()
{
	int i, n=2, t, consumo_total=0;
	float consumo_relativo;
	eletro e[n];
	printf("Insira um tempo em dias: ");
	scanf("%d", &t);
	for(i=0; i<n; i++)
	{
		printf("Nome: ");
		scanf("%s", e[i].nome);
		printf("Potencia: ");
		scanf("%f", &e[i].potencia);
		printf("Tempo ativo por dia (em Hora): ");
		scanf("%f", &e[i].tempo_hora);
		consumo_total=consumo_total+(e[i].potencia*e[i].tempo_hora)*t;
	}
	for(i=0; i<n; i++)
	{
		consumo_relativo=((e[i].potencia*e[i].tempo_hora)*100)/consumo_total;
		printf("Consumo Relativo da %s: %0.1f\n", e[i].nome, consumo_relativo);
	}
	printf("Consumo total: %d\n", consumo_total);
}
	
