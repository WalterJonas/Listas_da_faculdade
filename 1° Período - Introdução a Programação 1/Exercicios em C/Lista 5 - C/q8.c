//Escreva um algoritmo para ler 10 números. Todos os números lidos com valor inferior a 40 devem
//ser somados. Escreva o valor final da soma efetuada.
#include<stdio.h>
int main(){
	int x, soma, i;
	soma=0;
	for(i=1; i<=5; i++){
		printf("Insira um numero: ");
		scanf("%d", &x);
		if(x<40){
			soma=soma+x;	
		} 
	}
	printf("Soma: %d", soma);	
}
