//Uma empresa quer verificar se um empregado est� qualificado para a aposentadoria ou n�o. Para
//estar em condi��es, um dos seguintes requisitos deve ser satisfeito: - Ter no m�nimo 65 anos de idade. - Ter trabalhado no m�nimo 30 anos. - Ter no m�nimo 60 anos e ter trabalhado no m�nimo 25 anos. Com base nas informa��es acima, fa�a um algoritmo que leia: o n�mero do empregado (c�digo), o ano de seu
//nascimento e o ano de seu ingresso na empresa. O programa dever� escrever a idade e o tempo de trabalho do
//empregado e a mensagem 'Requerer aposentadoria' ou 'N�o requerer'.

#include<stdio.h>
int main(){
	int codigo, ano_nasc, ano_ingresso, idade, tempo_trabalho;
	printf("Codigo: ");
	scanf("%d", &codigo);
	printf("Insira o ano do nascimento do empregado: ");
	scanf("%d", &ano_nasc);
	printf("Insira o ano do ingresso na empresa: ");
	scanf("%d", &ano_ingresso);
	idade=2019-ano_nasc;
	tempo_trabalho=2019-ano_ingresso;
	if(idade>=65 || tempo_trabalho>=30 || idade>=60 && tempo_trabalho>=25){
	    printf("Idade: %d anos\nTempo de trabalho: %d anos\n", idade, tempo_trabalho);
	    printf("Requerer aposentadoria");
	}
	else{
	    printf("Idade: %d anos\nTempo de trabalho: %d anos\n", idade, tempo_trabalho);
	    printf("N�o requerer");
	}
}
