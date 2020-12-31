#include <stdio.h>
/*Leia N e uma lista de N números e escreva a soma e a média de todos os números da lista.
*/
int main(){
    int n, soma=0, peso;
    float media;
    printf("Valor de N: ");
    scanf("%i", &n);
    peso = n;

    while(n > 0){
        float valor;
        printf("Valor: ");
        scanf("%f", &valor);
        soma = soma + valor;
        n = n - 1;
    }
    media = soma / peso;
    printf("Media: %0.2f", media);
    return 0;
}
