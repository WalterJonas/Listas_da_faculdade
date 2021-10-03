//Zezinho comprou um microcomputador para controlar o rendimento diário de seu trabalho como
//pescador. Toda vez que ele traz um peso de peixes maior do que o estabelecido pelo regulamento de pesca do
//estado do Amazonas (50 quilos), deve pagar um multa de R$ 4,00 por quilo excedente. Zezinho precisa que
//você faça um algoritmo que leia o peso dos peixes e verifique se há excesso. Se houver, o excesso e o valor da
//multa que Zezinho deverá pagar. Caso contrário, mostrar uma mensagem que ele não deve pagar nada.

#include<stdio.h>
int main(){
	float peso, multa;
	printf("Peso: ");
	scanf("%f", &peso);
	if(peso<=50)
	    printf("Não precisa pagar nada\n");
	else
	    printf("Excesso de peso\n");
	    multa=peso-50;
	    multa=multa*4;
	    printf("Multa: R$ %f", multa);	
}
