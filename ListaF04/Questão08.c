#include <stdio.h>
/*Leia um vetor com N elementos, ordene-o e escreva-o em ordem crescente.
*/
int main(){
    int n,aux;
    printf("Digite o valor de N: ");
    scanf("%i", &n);
    int vetor[n];

    for(int i=0;i<n;i++){
        printf("Digite o valor da posicao %i: ",i);
        scanf("%i", &vetor[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    printf("Em ordem crescente: ");
    for(int i=0;i<n;i++){
        printf("%i ",vetor[i]);
    }
    return 0;
}
