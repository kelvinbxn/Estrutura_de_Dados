#include <stdio.h>
/*Leia um vetor A com N elementos e escreva um vetor B, com os mesmos elementos de A, sendo que estes
deverão estar invertidos, ou seja, o 1o elemento de A deve ser o último elemento de B; o 2o elemento de A
deve ser o penúltimo elemento de B e assim por diante.
*/
int main(){
    printf("Digite o tamanho do vetor A: ");
    int tamanho,aux2;
    scanf("%i", &tamanho);
    int a[tamanho],b[tamanho];
    aux2 = tamanho - 1;

    for(int aux=0;aux<tamanho;aux++){
        printf("Digite o %i valor de A: ", aux);
        scanf("%i", &a[aux]);
        b[aux2] = a[aux];
        aux2--;
    }

    printf("Vetor B: ");
    for(int aux=0; aux<tamanho;aux++){
        printf("%i ", b[aux]);
    }

    return 0;
}
