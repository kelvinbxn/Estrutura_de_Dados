#include <stdio.h>
/*Escreva um programa para determinar o n�mero de d�gitos de um n�mero informado.
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
