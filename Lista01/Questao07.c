#include <stdio.h>
/*Leia um valor em real (R$),
calcule e escreva 70% deste valor.
*/
int main(){
    float valor, novoValor;

    printf("Escreva um valor: ");
    scanf("%f", &valor);
    novoValor = valor * 0.70;

    printf("O novo dalor e de: %0.2f\n", novoValor);
    return 0;
}
