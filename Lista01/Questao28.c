#include <stdio.h>
/*Sabendo que lat�o � constitu�do de 70% de cobre e 30% de zinco, escreva um programa que calcule a
quantidade de cada um desses componentes para se obter certa quantidade de lat�o (em kg), informada pelo
usu�rio.
*/
int main(){
    float quantidadeLatao, quantidadeCobre, quantidadeZinco;

    printf("digite uma quantidade de Latao em Kg: ");
    scanf("%f", &quantidadeLatao);
    quantidadeCobre = quantidadeLatao * 0.70;
    quantidadeZinco = quantidadeLatao * 0.30;
    printf("%0.1f Kg de Latao equivale a:\n%0.2f Kg de Cobre e %0.2f Kg de Zinco\n", quantidadeLatao, quantidadeCobre, quantidadeZinco);
    return 0;
}
