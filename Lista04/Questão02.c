#include <stdio.h>
/*Leia 2 vetores A e B com N elementos, escreva um vetor C, sendo este a junção das vetors A e B. Desta
forma, a vetor C deverá ter 2*N elementos.
*/
int main(){
    int n;
    printf("Valor de N: ");
    scanf("%i", &n);
    int a[n],b[n],c[n*2];

    for(int i=0;i<n;i++){
        printf("Digite o valor %i de A: ", i);
        scanf("%i", &a[i]);
        c[i] = a[i];
    }

    for(int i=0;i<n;i++){
        printf("Digite o valor %i de B: ", i);
        scanf("%i", &b[i]);
        c[i+n] = b[i];
    }

    printf("\nVetor C: ");
    for(int i=0;i<n*2;i++){
        printf("%i ", c[i]);
    }
    return 0;
}
