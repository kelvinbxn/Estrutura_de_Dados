#include <stdio.h>
/*Leia dois n�meros X e N. A seguir, escreva o resultado das divis�es de X por N onde, ap�s cada
divis�o, X passa a ter como conte�do o resultado da divis�o anterior e N � decrementado de 1 em 1, at�
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
