#include <stdio.h>
#include <string.h>
/*Em um concurso de beleza, cada candidata tem um cartão contendo nome, altura e peso. Escreva um
programa que leia um conjunto de cartões e escreva o nome e a altura da candidata mais alta e da mais
baixa; o nome e o peso da candidata mais magra e da mais gorda. (Flag: nome = 'FIM').
*/
int main(){
    int cartao;
    char nome[50], * nomeMaiorA, * nomeMenorA, * nomeMaiorPeso, * nomeMenorPeso;
    float altura=0, peso=0, alturaMaiorA=0, alturaMenorA=0, pesoMagra=0, pesoGorda=0;

    printf("Digite o Nome da candidata: ");
    scanf("%s", &nome);
    while(strcmp(nome,"FIM")!=0){
        printf("Digite o numero do cartao: ");
        scanf("%i", &cartao);
        printf("Digite a Altura da candidata: ");
        scanf("%f", &altura);
        printf("Digite o Peso da candidata: ");
        scanf("f", &peso);

        if(peso > pesoGorda){
            pesoGorda = peso;
            nomeMaiorPeso = nome;
        }
        else if(peso < pesoMagra){
            pesoMagra = peso;
            nomeMenorPeso = nome;
        }
        if(altura > alturaMaiorA){
            alturaMaiorA = altura;
            nomeMaiorA = nome;
        }
        else if(altura < alturaMenorA){
            alturaMenorA = altura;
            nomeMenorA = nome;
        }
        printf("Digite o Nome da candidata: ");
        scanf("%s", &nome);
    }
    printf("Mais alta: %s", nomeMaiorA);
    printf("Altura: %f\n\n", alturaMaiorA);
    printf("Mais baixa: %s", nomeMenorA);
    printf("Altura: %f\n\n", alturaMenorA);
    printf("Mais gorda: %s", nomeMaiorPeso);
    printf("Peso: %f\n\n", pesoGorda);
    printf("Mais magra: %s", nomeMenorPeso);
    printf("Peso: %f", pesoMagra);
    return 0;
}
