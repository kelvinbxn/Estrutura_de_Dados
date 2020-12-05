#include <stdio.h>
/*Leia um número inteiro de meses, calcule e
escreva quantos anos e quantos meses ele corresponde.
*/
int main(){
    int meses, anos, resto;

    printf("Digite um valor em Mes: ");
    scanf("%i", &meses);
    anos = meses / 12;
    resto = meses % 12;

    printf("%i Mes(es) equivale a: %i Ano(s) e %i Mes(es)", meses, anos, resto);
    return 0;
}
