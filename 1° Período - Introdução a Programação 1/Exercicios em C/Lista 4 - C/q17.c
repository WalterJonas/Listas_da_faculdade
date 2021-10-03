//Faça um programa, utilizando estrutura de condição, que receba um número real, digitado pelo
//usuário e mostre o menu para selecionar o tipo de cálculo que deve ser realizado. No final, mostre o resultado e
//a operação efetuada. MENU
//101-Raiz quadrada
//102-A metade
//103-10% do número
//104-O dobro
//Escolha a opção:

#include<stdio.h>
#include<math.h>
int main(){
	float x, raiz;
	int op;
	printf("Insira um numero: ");
	scanf("%f", &x);
	printf("\n101 - Raiz quadrada\n102 - A metade\n103 - 10% do número\n104 - O dobro\nEscolha uma opção: ");
	scanf("%d", &op);
	if(op==101){
	    printf("Raiz: %f",sqrt(x));
	}
	
	else if(op==102){
		printf("A metade: %f", x/2);
	}
	    
	else if(op==103){
	 printf("10% do número: %f", x*0.10);	
	}
	   
	else if(op==104)
	{
		printf("O dobro: %f", x*2);
	}
	    
	else{
		printf("Opção inválida");
	}
	    		
}
