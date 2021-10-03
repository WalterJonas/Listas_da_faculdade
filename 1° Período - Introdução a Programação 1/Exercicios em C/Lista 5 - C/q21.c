//Crie um algoritmo que calcule e mostre o cinco primeiros números primos
#include <stdio.h>
int main (){
    int x, y, cont=0;
    for (x = 1;x <= 12;x++){
        for (y = 1; y <= x;y++){
            if (x % y == 0){
                cont++;
            }
            }
    if ( cont == 2){
        printf("%d ", x);
    }
    cont = 0;
    }

    return 0;
}
