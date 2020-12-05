#include <stdio.h>
/*Leia uma velocidade em km/h,
calcule e escreva esta velocidade em m/s. (Vm/s = Vkm/h / 3.6)
*/
int main(){
    float velocidadeKm, velocidadeMs;

    printf("Escreva uma velociade em Km/h: ");
    scanf("%f", &velocidadeKm);
    velocidadeMs = velocidadeKm / 3.6;

    printf("A velocidade %0.2fKm/h equivale a %0.2fM/s\n", velocidadeKm, velocidadeMs);
    return 0;
}
