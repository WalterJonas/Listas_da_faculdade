//O produto escalar de dois vetores do Rn é a soma dos produtos das componentes
//correspondentes. Isto é, se X = {x1, x2, ..., xn } e Y = {y1, y2,..., yn }, o produto escalar é x1*y1 +
//x2*y2 ... + xn*yn. Crie um algoritmo em C que receba dois vetores do R, n dado pelo usuário, e
//forneça o produto escalar deles.
#include<stdio.h>
int main()
{
	int n;
	printf("Insira o N: ");
	scanf("%d", &n);
	int vetorA[n], vetorB[n], i, produto, soma=0;
	for(i=0; i<n; i++)
    {
    	printf("Vetor A [%d]: ", i);
        scanf("%d", &vetorA[i]);    
	}
	for(i=0; i<n; i++)
    {
    	printf("Vetor B[%d]: ", i);
        scanf("%d", &vetorB[i]);    
	}
	for(i=0; i<n; i++)
    {
    	produto=vetorA[i]*vetorB[i];
    	soma=soma+produto;
	}
	printf("Produto escalar: %d", soma);
}
