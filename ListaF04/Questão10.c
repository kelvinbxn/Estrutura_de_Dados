#include <stdio.h>
/*Leia um vetor com N números, calcule e escreva a soma e a media dos números lidos.
*/
int main(){
    int n,soma=0;
    float media=0;
    printf("Valor de N: ");
    scanf("%i", &n);
    int vetor[n];
    for(int i=0;i<n;i++){
        printf("Valor da posicao %i: ", i);
        scanf("%i", &vetor[i]);
        soma = soma + vetor[i];
    }
    media = soma / n;
    printf("Soma: %i\n", soma);
    printf("Media: %0.2f", media);
    return 0;
}
