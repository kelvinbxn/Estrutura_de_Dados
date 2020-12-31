#include <stdio.h>
/*Leia 2 (dois) números, calcule e escreva o mdc (máximo divisor comum) entre os números lidos.
*/
int main(){
    int numero1, numero2;
    float resto;

    printf("Digite 2 numero para saber o MDC: ");
    scanf("%i %i", &numero1, &numero2);

    while(numero2 != 0){
        resto = numero1 % numero2;;
        numero1 = numero2;
        numero2 = resto;
    }
    printf("MDC = %i\n", numero1);
    return 0;
}
