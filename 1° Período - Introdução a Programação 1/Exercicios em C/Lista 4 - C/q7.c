//Faça um algoritmo que leia do usuário cinco números. Se os valores forem diferentes identifique e
//imprima o maior e o menor valor.

#include<stdio.h>
int main(){
	int i, x, maior, menor;
	printf("Insira um numero: ");
	scanf("%d", &x);
	maior=x;
	menor=x;
	for(i=0; i<3; i++){
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
	system("pause");
}
