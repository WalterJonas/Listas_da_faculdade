//Crie um algoritmo que leia a temperatura de uma pessoa e mostre a mensagem “Febre Alta” (temp
//= 39), “Febril” (39 > temp = 37) ou “Sem Febre” (temp < 37).

#include<stdio.h>
int main(){
	float temp;
	printf("Insira a temperatura da pessoa: ");
	scanf("%f", &temp);
	if(temp>=39){
		printf("Febre alta");
	}
	else if(temp>=37 && temp<39){
		printf("Febril");
	}
	else{
		printf("Não há febre");
	}
	    
}
