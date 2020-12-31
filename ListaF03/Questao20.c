#include <stdio.h>
/*Considere que um carro vai fazer uma viagem entre duas cidades e que a distância a ser percorrida é de
600 km. No início da viagem, o carro está com o tanque cheio (50 litros). Durante o percurso foi usado
um aparelho para medir o desempenho do carro, que mostrava, quando acionado, duas informações:
 Distância percorrida desde a última medição;
 Quantidade de litros consumidos para percorrer a distância indicada.
Escreva um programa que leia estas informações e escreva:
 se o carro chegou ao seu destino (distância percorrida maior ou igual a 600 km);
 se o carro parou antes de chegar por falta de combustível (consumo igual a 50 litros);
 o consumo em km/l do carro.
*/
int main(){
    int distancia=600, distenciaPecorrida, litros;
    float kml;

    printf("Distencia pecorrida: ");
    scanf("%i", &distenciaPecorrida);
    printf("Quantidade de litros consumios por essa distancia: ");
    scanf("%i", &litros);
    kml = distenciaPecorrida / litros;
    litros = 50 - litros;

    while((distenciaPecorrida <= distancia) && (litros > 0)){
        distenciaPecorrida += kml;
        litros = litros - 1;

    }
    printf("Distancia pecorrida: %i\n", distenciaPecorrida);
    printf("Consumo de Litros totais: %i\n", litros);
    printf("Consumo KM/L do carro: %0.2f\n", kml);
    return 0;
}
