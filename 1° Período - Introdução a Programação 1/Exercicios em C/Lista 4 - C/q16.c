//Crie um algoritmo chamado Zodiaco. Este algoritmo deve ler a data do seu anivers�rio e atribuir
//um valor para a vari�vel inteira chamada signo, conforme lista abaixo:
//a) 1 o signo do zod�aco: Aqu�rio (21/jan a 19/fev)
//b) 2 o signo do zod�aco: Peixes (20/fev a 20/mar)
//c) 3 o signo do zod�aco: �ries (21/mar a 20/abr)
//d) 4 o signo do zod�aco: Touro (21/abr a 20/mai)
//e) 5 o signo do zod�aco: G�meos (21/mai a 20/jun)
//f) 6 o signo do zod�aco: C�ncer (21/jun a 21/jul)
//g) 7 o signo do zod�aco: Le�o (22/jul a 22/ago)
//h) 8 o signo do zod�aco: Virgem (23/ago a 22/set)
//i) 9 o signo do zod�aco: Libra (23/set a 22/out)
//j) 10 o signo do zod�aco: Escorpi�o (23/out a 21/nov)
//k) 11 o signo do zod�aco: Sagit�rio (22/nov a 21/dez)
//l) 12 o signo do zod�aco: Capric�rnio (22/dez a 20/jan)

#include<stdio.h>
int main(){
	int dia, mes;
	printf("DIA: ");
	scanf("%d", &dia);
	printf("MES: ");
	scanf("%d", &mes);
	if(dia>=21 && dia<=30 && mes==1 || dia>=1 && dia<=19 && mes==2)
		printf("AQUARIO");
	else if(dia>=20 && dia<=30 && mes==2 || dia>=1 && dia<=20 && mes==3)
		printf("PEIXE");
	else if(dia>=21 && dia<=30 && mes==3 || dia>=1 && dia<=20 && mes==4)
		printf("ARIES");
	else if(dia>=21 && dia<=30 && mes==4 || dia>=1 && dia<=20 && mes==5)
		printf("TOURO");
	else if(dia>=21 && dia<=30 && mes==5 || dia>=1 && dia<=20 && mes==6)
		printf("GEMEOS");
	else if(dia>=21 && dia<=30 && mes==6 || dia>=1 && dia<=21 && mes==7)
		printf("CANCER");
	else if(dia>=22 && dia<=30 && mes==7 || dia>=1 && dia<=22 && mes==8)
		printf("LEAO");
	else if(dia>=23 && dia<=30 && mes==8 || dia>=1 && dia<=22 && mes==9)
		printf("VIRGEM");
	else if(dia>=23 && dia<=30 && mes==9 || dia>=1 && dia<=22&& mes==10)
		printf("LIBRA");
	else if(dia>=23 && dia<=30 && mes==10 || dia>=1 && dia<=21 && mes==11)
		printf("ESCORPIAO");    
	else if(dia>=22 && dia<=30 && mes==11 || dia>=1 && dia<=21 && mes==12)
		printf("SARGITARIO");
	else if(dia>=22 && dia<=30 && mes==12 || dia>=1 && dia<=20 && mes==1)
		printf("CAPRICONIO");			
}
