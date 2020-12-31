#include <stdio.h>
/*Leia um número, calcule e escreva seu fatorial.
*/
int main(){
    int numero, soma=1,contador;
    printf("Digite o valor de um numero: ");
    scanf("%i", &numero);

    for(contador = 1; contador <= numero; contador += 1){
        soma = soma * contador;
    }
    printf("%i", soma);
    return 0;
}
