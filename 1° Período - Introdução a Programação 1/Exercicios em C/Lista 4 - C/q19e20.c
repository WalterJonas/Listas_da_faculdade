//Um posto est� vendendo combust�veis com a seguinte tabela de descontos:

//�lcool 
//at� 20 litros, desconto de 3% por litro
//acima de 20 litros, desconto de 5% por litro

//Gasolina
//at� 20 litros, desconto de 4% por litro
//acima de 20 litros, desconto de 6% por litro

#include<stdio.h>
int main(){
	int litros;
	char combustivel;
	float preco, desc, total;
	
	printf("N�mero de litros: ");
	scanf("%d", &litros);
	printf("A - Alcool\nG - Gasolina\nOp��o: ");
	scanf("%s", &combustivel);
	
	if(combustivel=='A' || combustivel=='a' && litros<=20){ 
		preco=litros*2.90;
	    desc=preco-(preco*(3/100));
	    total=preco-desc;
	    printf("\nValor a ser pago: R$ %f", total);
	}
	else if(combustivel=='A' || combustivel=='a' && litros>20){
		preco=litros*2.90;
	    desc=preco-(preco*(5/100));
	    total=preco-desc;
	    printf("\nValor a ser pago: R$ %f", total);
	}
	else if(combustivel=='G' || combustivel=='g' && litros<=20){
		preco=litros*3.30;
	    desc=preco-(preco*(4/100));
	    total=preco-desc;
	    printf("\nValor a ser pago: R$ %f", total);
	}
	else if(combustivel=='G' || combustivel=='g' && litros>20){
		preco=litros*3.30;
	    desc=preco-(preco*(6/100));
	    total=preco-desc;
	    printf("\nValor a ser pago: R$ %f", total);	
	} 	
}
