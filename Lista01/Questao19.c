#include <stdio.h>
/*Leia um número inteiro de metros, calcule e
escreva quantos Km e quantos metros ele corresponde.
*/
int main(){
    int km, m, resto;

    printf("Escreva um valor inteiro em M: ");
    scanf("%i", &m);
    km = m / 1000;
    resto = m % 1000;

    printf("%i M equivale a: %i Km e %i M", m, km, resto);
    return 0;
}
