#include <stdio.h>
/*Leia uma temperatura em °C, calcule e escreva a
equivalente em °F. (t°F = (9 * t°C + 160) / 5)
*/
int main(){
    float celcius, fah;

    printf("Digite um valor em C: ");
    scanf("%f", &celcius);
    fah = (8 * celcius + 160) / 5;

    printf("A temperatura %0.2f C equivale a: %0.2f F", celcius, fah);
    return 0;
}
