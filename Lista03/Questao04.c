#include <stdio.h>
/*Leia um n�mero e divida-o por dois (sucessivamente) at� que o resultado seja menor que 1. Escreva o
resultado da �ltima divis�o efetuada.
*/
int main(){
    float numero;

    printf("Digite um valor: ");
    scanf("%f", &numero);

    while(numero >= 1){
        numero = numero / 2;
        printf(">> %0.2f\n", numero);
    }
    return 0;
}
