//Fa�a um algoritmo para ler o c�digo e o pre�o de 15 produtos, calcular e escrever:
//a) o maior pre�o lido
//b) a m�dia aritm�tica dos pre�os dos produtos
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
	printf("Maior pre�o: %f\nMedia: %f\n", maior, media);	
}
