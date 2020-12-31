#include <stdio.h>
/*Supondo-se que a população de uma cidade A seja de 200.000 habitantes, com uma taxa anual de
crescimento na ordem de 3.5%, e que a população de uma cidade B seja de 800.000 habitantes,
crescendo a uma taxa anual de 1.35%, Escreva um programa que determine quantos anos serão
necessários, para que a população da cidade A ultrapasse a população da cidade B.
*/
int main(){
    int cidadeA=200000, cidadeB=800000, anos=0;

    while(cidadeA < cidadeB){
        cidadeA += (cidadeA * 0.035);
        cidadeB += (cidadeB * 0.0135);
        anos += 1;
    }
    printf("A ciade A ira alcancar a cidade B em %i anos",anos);
    return 0;
}
