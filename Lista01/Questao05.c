#include <stdio.h>
/*Leia um n�mero inteiro (3 d�gitos) e
escreva o inverso do n�mero. (Ex.: num = 532 ; inverso =235)
*/
int main(){

    int numero, centena, dezena, unidade, resto;

    printf("Escreva um numero de 3 digitos: ");
    scanf("%i", &numero);
    centena = numero / 100;
    resto = numero % 100;
    dezena = resto / 10;
    unidade = resto % 10;

    printf("Numero invertido: %i%i%i",unidade,dezena,centena);
    return 0;
}
