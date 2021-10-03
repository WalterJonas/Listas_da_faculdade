//Crie um algoritmo que receba três números inteiros
// e imprima-os em ordem crescente, utilizando a seleção encadeada (aninhada).

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
		printf("%d, %d, %d\n", c,b,a);
	}
	else if (b>c && c>a){
		printf("%d, %d, %d\n", a,c,b); 
	}
	else if (c>b && b>a){
		printf("%d, %d, %d\n", a,b,c);
	}
	else if (b>a && a>c){
		printf("%d, %d, %d\n", c,a,b);
	}
	else if (a>c && c>b){
		printf("%d, %d, %d\n", b,c,a);
	}	
	else if (c>a && a>b){
		printf("%d, %d, %d\n", b,a,c);
	}		
}
