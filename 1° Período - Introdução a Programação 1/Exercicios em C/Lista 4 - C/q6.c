//. Faça um algoritmo que receba três números e armazene-os em três variáveis com os seguintes
//nomes: maior, intermediário e menor. Depois imprima na tela os valores.

#include<stdio.h>
int main(){
	int a, b, c;
	printf("Insira o valor A: ");
	scanf("%d", &a);
	printf("Insira o valor B: ");
	scanf("%d", &b);
	printf("Insira o valor C: ");
	scanf("%d", &c);
	if(a>b && b>c){
		printf("Menor: %d\nIntermediario: %d\nMaior %d", c,b,a);
	}
	else if (b>c && c>a){
		printf("Menor: %d\nIntermediario: %d\nMaior %d", a,c,b); 
	}
	else if (c>b && b>a){
		printf("Menor: %d\nIntermediario: %d\nMaior %d", a,b,c);
	}
	else if (b>a && a>c){
		printf("Menor: %d\nIntermediario: %d\nMaior %d", c,a,b);
	}
	else if (a>c && c>b){
		printf("Menor: %d\nIntermediario: %d\nMaior %d", b,c,a);
	}	
	else if (c>a && a>b){
		printf("Menor: %d\nIntermediario: %d\nMaior %d", b,a,c);
	}
	system("pause");		
}
