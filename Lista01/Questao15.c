#include <stdio.h>
/*Leia uma temperatura em °F, calcule e escreva a
equivalente em °C. (t°C = (5 * t°F - 160) / 9).
*/
int main(){
    float fah, celcius;

    printf("Escreva uma temperatura em F: ");
    scanf("%f", &fah);
    celcius = (5 * fah - 160) / 9;

    printf("A temperatura %0.2f F equivale a: %0.2f C", fah, celcius);
    return 0;
}
