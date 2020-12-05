#include <stdio.h>
/*Leia um número inteiro de minutos, calcule e escreva quantos dias, quantas horas e quantos minutos ele
corresponde.
*/
int main(){
    int minutos, dias, horas, resto;

    printf("Escreva um valor em minutos: ");
    scanf("%i", &minutos);
    dias = minutos / 1440;
    resto = minutos % 1440;
    horas = resto / 60;
    minutos = resto % 60;

    printf("%i Dia(s) %i Hora(s) e %i Minuto(s)",dias, horas, minutos);
    return 0;
}
