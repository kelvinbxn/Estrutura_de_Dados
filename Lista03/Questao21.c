#include <stdio.h>
/*Leia 2 números inteiros e escreva a multiplicação dos mesmos, sem que o operador de multiplicação (*)
seja utilizado
*/
int main(){
    int x,y,resultado=0;
    printf("Valor de X: ");
    scanf("%i", &x);
    printf("Valor de Y: ");
    scanf("%i", &y);
    for(int i = 1; i <= y;i++){
        resultado += x;
    }
    printf("Resultado: %i",resultado);
    return 0;
}
