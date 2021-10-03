//A Prefeitura de Manaus abriu uma linha de crédito para os funcionários estatutários. O
//valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Crie um algoritmo que
//receba o o salário bruto, o valor do empréstimo, a quantidade de parcelas e imprima se o
//empréstimo pode ser concedido ou não.

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
		printf("NÃO CONCEDIDO");
	}
}
