#include <stdio.h>
/*Leia o valor do dólar e um valor em dólar,
calcule e escreva o equivalente em real (R$).
*/
int main(){
    float real, dolar, convertido;

    printf("Escreva a atual cotacao do Dolar em reais: ");
    scanf("%f", &real);
    printf("Escreva um valor em Dolar: ");
    scanf("%f", &dolar);
    convertido = dolar * real;

    printf("%0.2f Dolares equivale a: %0.2f Reais\n", dolar, convertido);
    return 0;
}
