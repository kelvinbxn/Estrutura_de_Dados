#include <stdio.h>
/*Leia dois números X e N. A seguir, escreva o resultado das divisões de X por N onde, após cada
divisão, X passa a ter como conteúdo o resultado da divisão anterior e N é decrementado de 1 em 1, até
chegar a 2.
*/
int main(){
    float x, n, divisao;

    printf("Digite o valor de X: ");
    scanf("%f", &x);
    printf("Digite o valor de N: ");
    scanf("%f", &n);

    while(n > 2){
        divisao = x / n;
        printf(">> %0.5f\n", divisao);
        x = divisao;
        n = n - 1;
    }
    return 0;
}
