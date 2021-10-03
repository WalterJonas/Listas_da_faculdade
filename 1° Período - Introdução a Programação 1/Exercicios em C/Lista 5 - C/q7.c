//Faça um algoritmo para ler o código e o preço de 15 produtos, calcular e escrever:
//a) o maior preço lido
//b) a média aritmética dos preços dos produtos
#include<stdio.h>
int main(){
	int i;
	float preco1, preco, maior, soma, media;
	printf("Preco: ");
	scanf("%f", &preco1);
	maior=preco1;
	soma=0;
	for(i=0; i<2; i++){
		printf("Preco: ");
		scanf("%f", &preco);
		if(preco>maior){
			maior=preco;
		}
        soma=soma+preco;
	}
	media=(preco1+soma)/3;
	printf("Maior preço: %f\nMedia: %f\n", maior, media);	
}
