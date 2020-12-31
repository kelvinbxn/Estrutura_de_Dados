#include <stdio.h>
/*Leia um número e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda etc.), se digitar outro valor
deve aparecer valor inválido.
*/
int main(){
    int valor;

    printf("Escolha um numero para saber o correspondente da semana: ");
    scanf("%i", &valor);

    switch(valor){
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda");
            break;
        case 3:
            printf("Terca");
            break;
        case 4:
            printf("Quarta");
            break;
        case 5:
            printf("Quinta");
            break;
        case 6:
            printf("sexta");
            break;
        case 7:
            printf("Sabado");
            break;
        default:
            printf("Valor Invalido");
            break;
    }
    return 0;
}
