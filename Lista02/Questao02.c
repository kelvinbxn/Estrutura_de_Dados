#include <stdio.h>
/*Leia 3 (três) números, verifique e escreva o
maior entre os números lidos.
*/
int main(){
    float x, y, z;

    printf("Escreva 3 numeros para saber qual eh o maior: ");
    scanf("%f %f %f", &x, &y, &z);
    if(x == y == z){
        printf("Os 3 valores sao iguais!!!!\n");
    }
    else{
        if(x >= y && x >= z){
            printf("O maior valor eh: %0.2f\n", x);
        }
        else if (y >= x && y >= z){
            printf("O maior valor eh: %0.2f\n", y);
        }
        else if(z >= x && z >= y){
            printf("O maior valor eh: %0.2f\n", z);
        }
    }
    return 0;
}
