//Crie um algoritmo que leia um n�mero inteiro do usu�rio e imprima uma mensagem se
//o n�mero digitado for par ou �mpar. Para verificar se um n�mero � par, utilizamos o operador %
//(resto da divis�o). Ao dividir um n�mero por 2 e o resto da divis�o for igual a zero, temos um
//n�mero par.
 
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
