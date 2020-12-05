#include <stdio.h>
/* Leia uma velocidade em m/s,
calcule e escreva esta velocidade em km/h. (Vkm/h = Vm/s * 3.6)

*/
int main(){
    float velocidadeMs, velocidadeKm;

    printf("Escreva a velociade em M/s: ");

    scanf("%f", &velocidadeMs);
    velocidadeKm = velocidadeMs * 3.6;

    printf("Isso equivale a %0.1f Km/h\n", velocidadeKm);

    return 0;
}
