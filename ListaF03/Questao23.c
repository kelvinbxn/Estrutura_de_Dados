#include <stdio.h>
/*Escreva um programa que leia a razão de uma PG (Progressão Geométrica) e o seu primeiro termo e
escreva os N termos da PG. Ler o valor de N.
*/
int main(){
    int razao, termo, n;

    printf("Valor da Razao: ");
    scanf("%i", &razao);
    printf("Valor Primeiro termo: ");
    scanf("%i", &termo);
    printf("Valor de N termo: ");
    scanf("%i", &n);
    printf("\n1 Termo > %i\n",termo);
    for(int i = 2; i <= n; i++){
        termo = termo * razao;
        printf("%i Termo > %i\n", i,termo);
    }
    return 0;
}
