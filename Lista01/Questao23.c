#include <stdio.h>
/*Leia 3 n�meros, calcule e escreva a
m�dia dos n�meros.
*/
int main(){
    float a,b,c,media;

    printf("Escreva 3 numeros: ");
    scanf("%f %f %f", &a, &b, &c);
    media = (a + b + c) / 3;

    printf("A media eh de: %0.2f", media);
    return 0;
}
