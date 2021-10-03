#include<stdio.h>
int main(){
    int i, quant;
    float salario;
     printf("QUANTIDADE DE FUNCIONÁRIOS: ");
     scanf("%d", &quant);
     for(i=0; i<quant; i++){
         printf("SALARIO: ");
         scanf("%f", &salario);
     }
}