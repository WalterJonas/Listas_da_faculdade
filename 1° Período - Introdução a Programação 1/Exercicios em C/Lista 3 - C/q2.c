//O custo ao consumidor de um carro novo � a soma do custo de f�brica com a porcentagem do
//distribuidor e dos impostos, ambos aplicados ao custo de f�brica. Supondo que a porcentagem do distribuidor seja de
//12% e a dos impostos de 45%, prepare um algoritmo para ler o custo de f�brica do carro e imprimir o custo ao
//consumidor. 

#include<stdio.h>
int main(){
	float custo_fabrica, custo_consumidor;
	printf("Insira o custo de fabrica: ");
	scanf("%f", &custo_fabrica);
	custo_consumidor=custo_fabrica+(custo_fabrica*0.12)+(custo_fabrica*0.45);
	printf("Custo do consumidor: %f", custo_consumidor);
}
