//Calcule o valor de W de acordo com a fórmula abaixo. O valor de N é fornecido pelo usuário, sendo o limite da reptetição. W = 1 + 1/2 + 1/3 + 1/4 + 1/5 + ... 1/N
#include<stdio.h>
int main()
{
	float n, w, soma, i;
	printf("Insira: ");
	scanf("%f", &n);
	soma=0;
	for(i=1; i<=n; i++)
	{
		w=(1/i);
    	soma=(soma+w);
	}
printf("VALOR DE W: %f", soma);
}
