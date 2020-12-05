#include <stdio.h>
/*Leia um valor em m, calcule e
escreva o equivalente em cm.
*/
int main(){
    float m, cm;

    printf("Escreva um valor em M: ");
    scanf("%f", &m);
    cm = m * 100;

    printf("%0.2f M equivale a: %0.2f cm", m, cm);
    return 0;
}
