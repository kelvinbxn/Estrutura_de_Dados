#include <stdio.h>
/*Leia um vetor A com 20 elementos, calcule e escreva o valor de S.
S = (A[0] - A[19])2+ (A[1] - A[18])2+ ... + (A[8] - A[11])2+ (A[9] - A[10])2
*/
int main(){
    int vetor=0,a[20],j;

    for(int i=0;i<20;i++){
        printf("Digite o valor da posicao %i", i);
        scanf("%i", &a[i]);
    }
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
        j += (a[i] - a[sizeof(a)/sizeof(int) - 1 - i])^2;
    }
    printf("Valor de S: %i", j);
    return 0;
}
