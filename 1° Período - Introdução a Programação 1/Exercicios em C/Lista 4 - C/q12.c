//Fa�a um Programa que pergunte em que turno a pessoa estuda. Pe�a para digitar M-matutino ou V
//- Vespertino ou N - Noturno. Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inv�lido!", conforme o caso.

#include<stdio.h>
int main(){
	char turno;
	printf("Em qual turno voc� estuda? Digite M(Para Matutino), V(Para Vesperino) ou N(Para Noturno: ");
	scanf("%s", &turno);
	if(turno=='M' || turno=='m'){
		 printf("BOM DIA");
	}
	else if(turno=='V' || turno=='v'){
		printf("BOA TARDE");
	}
	else if(turno=='N' || turno=='n'){
		printf("BOA NOITE");
	}  
	else{
		printf("VALOR INV�LIDO");	
	}	    
}
