//Fa�a um algoritmo que leia a idade de uma pessoa e informe a sua classe eleitoral:
//N�o eleitor (abaixo de 16 anos)
//Eleitor obrigat�rio (18 � 65 anos)
//Eleitor facultativo (entre 16 e 18 anos e maior de 65 anos).

#include<stdio.h>
int main(){
	int idade;
	printf("Idade: ");
	scanf("%d", &idade);
	if(idade<16){
		printf("Nao eleitor!");
	}
	else if(idade>=18 && idade<=65){
		printf("Eleitor obrigatorio!");
	}
	else{
		printf("Eleitor facultativo!");
	}
}  
