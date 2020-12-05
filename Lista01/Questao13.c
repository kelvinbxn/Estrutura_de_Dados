#include <stdio.h>
#include <math.h>
/*Leia o valor do raio de uma esfera,
calcule e escreva seu volume. (v = (4 * pi * r3) / 3) (pi = 3,14)
*/
int main(){
    float raio, volume, pi=3.14;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    volume = (4 * pi * pow(raio,3)) / 3;
    printf("O volume da esfera eh: %0.2f", volume);
    return 0;
}
