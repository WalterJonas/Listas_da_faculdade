//. O card�pio de uma lanchonete � dado abaixo. Prepare um algoritmo que leia a quantidade de cada item
//que voc� consumiu e calcule a conta final. Hamb�rguer................. R$ 3,00
//X-burguer..................... R$ 2,50
//Fritas............................ R$ 2,50
//Refrigerante................. R$ 1,00
//Milkshake..................... R$ 3,00

#include<stdio.h>
int main(){
	int cont, quant;
	float conta;
	printf("1 - HAMB�RGUER****R$3,00\n");
	printf("2 - HAMB�RGUER****R$3,00\n");
	printf("3 - FRITAS********R$2,50\n");
	printf("4 - REFRIGERANTE**R$1,00\n");
	printf("5 - MILKSHAKE*****R$3,00\n");
	cont=1;
	while (cont<=5){
    printf("********* Produto %d ***********\n", cont);
    printf("Insira a quantidade que voc� deseja nesse produto: ");
    scanf("%d", &quant);
    if(cont==1)
        conta=quant*3;
    else if(cont==2)
        conta+=quant*2.5;
    else if(cont==3)
        conta+=quant*2.5;
    else if(cont==4)
        conta+=quant*1;
    else if(cont==5)
        conta+=quant*3;
    cont+=1;
}
printf("Conta: %f", conta);
}
