#include <stdio.h>
/*Leia a idade de uma pessoa expressa em anos, meses e
dias e escreva-a expressa apenas emdias.
*/
int main(){
    int anos, meses, dias, diasTotais;

    printf("Digite em Anos, Meses e Dias: ");
    scanf("%i %i %i", &anos, &meses, &dias);
    diasTotais = (anos * 365) + (meses * 30) + dias;
    printf("Isso equivale a: %i", diasTotais);
    return 0;
}
