//Faça um algoritmo que calcule a média ponderada de um aluno, a partir de suas 3 notas
//obtidas no curso, sabendo-se que a primeira avaliação tem peso 2, a segunda tem peso 4 e a
//terceira tem peso 4. No final, mostre a média final do aluno e também verifique se o aluno foi
//aprovado, se está na prova final ou se foi reprovado. Para este caso, aplique o sistema de avaliação
//da UFAM. 

#include<stdio.h>
int main(){
	float n1, n2, n3, mp;
	printf("Insira o N1: ");
	scanf("%f", &n1);
	printf("Insira o N2: ");
	scanf("%f", &n2);
	printf("Insira o N3: ");
	scanf("%f", &n3);
	mp=(n1*2+n2*4+n3*4)/10;
	printf("Media ponderada: %0.1f", mp);
	if(mp>=8){
		printf("\nAprovado!");  
	}
	else if(mp<2.5){
		printf("\nReprovado!");
	}  
	else{
		printf("\nO aluno esta na pf ");
	} 
}
