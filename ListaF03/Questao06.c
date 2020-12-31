#include <stdio.h>
/*Escreva um programa para determinar o número de dígitos de um número informado.
*/
int main(){
    int contador=0, numero;

    printf("Digite um valor: ");
    scanf("%i", &numero);

    while(numero > 0){
        numero = numero / 10;
        contador = contador + 1;
    }
    printf("Numero de digitos >> %i", contador);
    return 0;
}
