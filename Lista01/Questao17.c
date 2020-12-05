#include <stdio.h>
/*Leia um valor em kg (quilograma),
calcule e escreva o equivalente em g(grama).
*/
int main(){
    float kg, g;

    printf("Escreva um valor em Kg: ");
    scanf("%f", &kg);
    g = kg * 1000;

    printf("%0.2f Kg Equivale a: %0.2f gramas", kg, g);
    return 0;
}
