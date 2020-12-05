#include <stdio.h>
/*Leia 2 números inteiros, calcule e
escreva o quociente e o resto da divisão do 1o pelo 2o.
*/
int main(){
    int x, y;
    float quociente, resto;

    printf("Escreva o Pimeiro numero: ");
    scanf("%i", &x);
    printf("Escreva o Segundo numero: ");
    scanf("%i", &y);
    quociente = x / y;
    resto = x % y;

    printf("O Quociente de %i/%i: %0.2f\n", x, y, quociente);
    printf("O Resto da divisao de %i/%i: %0.2f\n", x, y, resto);
    return 0;
}
