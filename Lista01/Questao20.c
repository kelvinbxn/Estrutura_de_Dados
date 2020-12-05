#include <stdio.h>
/*Leia um número inteiro de metros, calcule e
escreva quantos Km e quantos metros ele corresponde.
*/
int main(){
    int valor, semanas, dias, horas;

    printf("Digite o valor em horas: ");
    scanf("%i", &valor);

    semanas = valor / 168;
    valor = valor % 168;
    dias = valor / 24;
    horas = valor % 24;
    printf("%i Semanas, %i Dias e %i Horas", semanas, dias, horas);
    return 0;
}
