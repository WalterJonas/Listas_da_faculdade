//A Prefeitura de Manaus abriu uma linha de cr�dito para os funcion�rios estatut�rios. O
//valor m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio bruto. Crie um algoritmo que
//receba o o sal�rio bruto, o valor do empr�stimo, a quantidade de parcelas e imprima se o
//empr�stimo pode ser concedido ou n�o.

#include<stdio.h>
int main(){
	float salario, emprestimo, prestacao;
	int parcela;
	printf("Insira o salario: ");
	scanf("%f", &salario);
	printf("Insira o emprestimo: ");
	scanf("%f", &emprestimo);
	printf("Insira a parcela: ");
	scanf("%d", &parcela);
	prestacao=emprestimo/parcela;
	if(prestacao<=salario*0.30){
		printf("CONCEDIDO");
	}  
	else{
		printf("N�O CONCEDIDO");
	}
}
