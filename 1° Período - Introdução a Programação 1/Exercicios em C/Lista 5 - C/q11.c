//Apresentar os resultados de uma tabuada (multiplicação) de um número qualquer. Esta deverá ser
//impressa no seguinte formato: Considerando como exemplo o fornecimento do número 2 :
//2 X 1 = 2
//2 X 2 = 4
//2 X 3 = 6
//2 X 4 = 8
//2 X 5 = 10
//(...)
//2 X 10 = 20
#include<stdio.h>
int main()
{
	int num,i,tab;
	printf("digite o numero da tabuada\n");
	scanf("%d",&num);
	for(i=1;i<11;i++)
	{
		tab=num*i;
     printf("%d x %d = %d\n",num,i,tab);
    }
}
