//Uma empresa de vendas tem tr�s corretores. A empresa paga ao corretor uma comiss�o calculada
//de acordo com o valor de suas vendas. Se o valor da venda de um corretor for maior que R$ 50.000.00 a
//comiss�o ser� de 12% do valor vendido. Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$
//50.000.00 (incluindo extremos) a comiss�o ser� de 9.5%. Em qualquer outro caso, a comiss�o ser� de 7%. 
//Escreva um algoritmo que gere um relat�rio contendo nome, valor da venda e comiss�o de cada um dos
//corretores. O relat�rio deve mostrar tamb�m o total de vendas da empresa.

#include<stdio.h>
int main(){
	char nome[10];
	float venda, comissao, total;
	int i;
	total=0;
	for(i=0; i<3; i++){
		printf("\nInsira o nome  do corretor: ");
		scanf("%s", &nome);
		printf("Insira o valor da venda do corretor: ");
		scanf("%f", &venda);
		total=total+venda;
		if(venda>50000){
	        comissao=venda*(12)/100;
	        printf("Nome: %s", nome);
	        printf("\nVenda: %f", venda);
	        printf("\nValor da comiss�o: %f\n", comissao);
	    }

	    else if(venda>=30000 && venda<=50000){
	    
	        comissao=venda*(9.5)/100;
	        printf("Nome: %s", nome);
	        printf("\nVenda: %f", venda);
	        printf("\nValor da comiss�o: %f\n", comissao);
	    }
	
	    else{
	        comissao=venda*0.07;
	        printf("Nome: %s", nome);
	        printf("\nVenda: %f", venda);
	        printf("\nValor da comiss�o: %f\n", comissao);
	    }
	}
		printf("Total de vebdas da empresa: %f", total);		
}
