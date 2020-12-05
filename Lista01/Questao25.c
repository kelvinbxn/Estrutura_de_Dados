#include <stdio.h>
/*Leia a idade de uma pessoa expressa em dias e escreva-a
expressa em anos, meses e dias.
*/
int main(){
    int dias, anos, meses, resto;

    printf("Escreva uma idade em dias: ");
    scanf("%i", &dias);
    anos = dias / 365;
    resto = dias % 365;
    meses = resto / 30;
    dias = resto % 30;

    printf("%i Ano(s) %i Mes(s) %i Dia(s)", anos, meses, dias);
    return 0;
}
