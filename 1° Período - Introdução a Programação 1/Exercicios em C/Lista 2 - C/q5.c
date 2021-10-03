//Crie um algoritmo que leia um número inteiro do usuário e imprima uma mensagem se
//o número digitado for par ou ímpar. Para verificar se um número é par, utilizamos o operador %
//(resto da divisão). Ao dividir um número por 2 e o resto da divisão for igual a zero, temos um
//número par.
 
#include<stdio.h>
int main(){
	int x;
	printf("Insira um valor: ");
	scanf("%d", &x);
	if(x%2==0){
		printf("\nPar");
	}
	else{
		printf("\nImpar");
	}
}
