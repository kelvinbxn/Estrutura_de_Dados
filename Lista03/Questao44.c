#include <stdio.h>
/*Leia N e uma lista de N n�meros e escreva o maior n�mero da lista.
*/
int main(){
    int n, maior=0;
    printf("Valor de N: ");
    scanf("%i", &n);

    while(n > 0){
        int numero;
        printf("Numero: ");
        scanf("%i", &numero);
        if(numero > maior){
            maior = numero;
        }
        n = n - 1;
    }
    printf("Maior: %i", maior);
    return 0;
}
