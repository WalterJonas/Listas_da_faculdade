//As ma��s custam R$ 1,30 cada se forem compradas menos de uma d�zia, e R$ 1,00 se forem
//compradas pelo menos 12. Escreva um programa que leia o n�mero de ma��s compradas, calcule e escreva o
//custo total da compra.

#include<stdio.h>
int main(){
	int n;
	float compra;
	printf("Insira o n�mero de ma��s compradas: ");
	scanf("%d", &n);
	if(n<12){
		compra=1.30*n;
		printf("Valor da compra: R$ %f\n", compra);
	}
	else if(n>=12){
	 	printf("Valor da compra: R$ %d\n", n);	
	}
}
