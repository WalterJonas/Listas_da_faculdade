//Faça um Programa que leia três números inteiros, em seguida mostre o maior e o menor deles.

#include<stdio.h>
int main(){
	int x, maior, menor, i;
	printf("Insira um numero: ");
	scanf("%d", &x);
	maior=x;
	menor=x;
	for(i=0; i<2; i++){
		printf("Insira um numero: ");
		scanf("%d", &x);
		if(x>maior){
			maior=x;
		}
		if(x<menor){
			menor=x;
		}
	}
	printf("Maior: %d\nMenor: %d", maior, menor);	
}
