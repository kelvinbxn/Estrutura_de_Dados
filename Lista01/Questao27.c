#include <stdio.h>
/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e
dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 28% e os
impostos de 45%, escreva um programa que leia o custo de fábrica de um carro e escreva o custo ao
consumidor.
*/
int main(){
    float custoFabrica, custoConsumidor;

    printf("Digite o valor do custo de fabrica de um carro: ");
    scanf("%f", &custoFabrica);
    custoConsumidor = custoFabrica + ((custoFabrica * 0.28 ) + (custoFabrica * 0.45));

    printf("O custo para o consumidor eh de: %0.2f R$", custoConsumidor);
    return 0;

}
