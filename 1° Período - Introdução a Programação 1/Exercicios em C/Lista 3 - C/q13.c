//Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da compra
//form menor que R$ 20,00; caso contrário, o lucro será de 30%. entrar com o valor do produto e imprimir o valor da
//venda.

#include<stdio.h>
int main(){
	float valor, venda;
	printf("Insira o valor do produto: ");
	scanf("%f", &valor);
	if(valor<20){
		venda=valor+(valor*0.45);
    	printf("Valor da venda: %f\n", venda);
	}	
	else{
		venda=valor+(valor*0.30);
        printf("Valor da venda: %f\n", venda);
	}      
}
