#include <stdio.h>
/*Leia um valor em km, calcule e
escreva o equivalente em m.
*/
int main(){
    float km,m;

    printf("Escreva um valor em Km: ");
    scanf("%f", &km);
    m = km * 1000;

    printf("%0.2f KM equivale a: %0.2f Metros", km, m);
    return 0;
}
