//Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não. Para
//estar em condições, um dos seguintes requisitos deve ser satisfeito: - Ter no mínimo 65 anos de idade. - Ter trabalhado no mínimo 30 anos. - Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos. Com base nas informações acima, faça um algoritmo que leia: o número do empregado (código), o ano de seu
//nascimento e o ano de seu ingresso na empresa. O programa deverá escrever a idade e o tempo de trabalho do
//empregado e a mensagem 'Requerer aposentadoria' ou 'Não requerer'.

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
	    printf("Não requerer");
	}
}
