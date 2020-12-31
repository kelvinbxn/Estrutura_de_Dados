#include <stdio.h>
/*Leia N e escreva todos os números inteiros de 1 a N.
*/
int main(){
    int numero,contador;
    printf("Digite um numero: ");
    scanf("%i", &numero);
    for(contador = 1; contador <= numero; contador++){
        printf("%i\n", contador);
    }
    return 0;
}
