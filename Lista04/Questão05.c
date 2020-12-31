#include <stdio.h>
#include <math.h>
/*Leia um número (vetor com 8 elementos) na base binária, calcule e escreva este número na base
hexadecimal e na base decimal.
*/
int main(){
    int bin[8],calculo=0, total=0;
    int aux=7;
    printf("Numero binario de 8 digitos\n");

    for(int i=0;i<8;i++){
        printf("Digite o valor %i: ", i);
        scanf("%i", &bin[i]);
    }
    for(int i=0;i<8;i++){
        calculo = (bin[i]* pow(2,aux));
        total = total + calculo;
        aux--;
    }
    printf("Valor em Decimal: %i\n", total);
    printf("Valor em Hexadecimal: %X" ,total);
    return 0;
}
