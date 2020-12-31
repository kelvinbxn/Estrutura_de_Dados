#include <stdio.h>
/*Leia um vetor com N elementos, encontre e escreva o maior e o menor elemento e suas respectivas
posições no vetor.
*/
int main(){
    int n,maior=0,menor=999999,posicaomenor,posicaomaior;
    printf("Digite o valor de N: ");
    scanf("%i", &n);
    int vetor[n];

    for(int i=0;i<n;i++){
        printf("Valor da posicao %i: ", i);
        scanf("%i", &vetor[i]);
        if(vetor[i] > maior){
            maior = vetor[i];
            posicaomaior = i;
        }
        if(vetor[i] < menor){
            menor = vetor[i];
            posicaomenor = i;
        }
    }
    printf("\nMaior valor = %i\nPosicao = %i",maior,posicaomaior);
    printf("\n\nMenor valor = %i\nPosicao = %i",menor,posicaomenor);
    return 0;
}
