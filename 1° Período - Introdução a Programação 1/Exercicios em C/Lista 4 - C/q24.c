//Zezinho comprou um microcomputador para controlar o rendimento di�rio de seu trabalho como
//pescador. Toda vez que ele traz um peso de peixes maior do que o estabelecido pelo regulamento de pesca do
//estado do Amazonas (50 quilos), deve pagar um multa de R$ 4,00 por quilo excedente. Zezinho precisa que
//voc� fa�a um algoritmo que leia o peso dos peixes e verifique se h� excesso. Se houver, o excesso e o valor da
//multa que Zezinho dever� pagar. Caso contr�rio, mostrar uma mensagem que ele n�o deve pagar nada.

#include<stdio.h>
int main(){
	float peso, multa;
	printf("Peso: ");
	scanf("%f", &peso);
	if(peso<=50)
	    printf("N�o precisa pagar nada\n");
	else
	    printf("Excesso de peso\n");
	    multa=peso-50;
	    multa=multa*4;
	    printf("Multa: R$ %f", multa);	
}
