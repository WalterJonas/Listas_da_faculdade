//Segundo uma tabela m�dica, o peso ideal est� relacionado com a altura e sexo. Fa�a um algoritmo que
//receba a altura e o sexo (M ou F) de uma pessoa, calcule e imprima o seu peso ideal, utilizando as seguintes f�rmulas:
//Homens: (72.7 * altura) � 58
//Mulheres: (62.1 * altura) � 44.7

#include<stdio.h>
int main(){
	float altura, peso;
	int sexo;
	printf("Altura: ");
	scanf("%f", &altura);
	printf("\n1 - Masculino \n2 - Feminino \nSexo: ");
	scanf("%d", &sexo);
	if(sexo==1){
		peso=(72.7*altura)-58;
    	printf("Peso da pessoa: %f", peso);
	}
	else if(sexo==2){
		peso=(62.1*altura)-44.7;
    	printf("Peso da pessoa: %f", peso);
	}
}
