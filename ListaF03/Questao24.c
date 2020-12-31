#include <stdio.h>
/*Escreva um programa que leia a razão de uma PA (Progressão Aritmética) e o seu primeiro termo e
escreva os N termos da PA. Ler o valor de N.
*/
int main(){
    int razao, termo, n, aux=1,aux2;

    printf("Valor da Razao: ");
    scanf("%i", &razao);
    printf("Valor Primeiro termo: ");
    scanf("%i", &termo);
    printf("Valor de N termo: ");
    scanf("%i", &n);
    printf("\n1 Termo > %i\n",termo);
    aux2 = termo;
    for(int i = 2; i <= n; i++){
        termo = aux2 + (razao * aux);
        printf("%i Termo > %i\n", i,termo);
        aux++;
    }
    return 0;
}
