#include <stdio.h>
/*Leia a medida de um ângulo (entre 0 e 360°) e escreva o quadrante (primeiro, segundo, terceiro ou quarto) em que
o ângulo se localiza.
*/
int main(){
    int angulo;

    printf("Coloque o valor do Anulo: ");
    scanf("%i", &angulo);

    if(angulo >=0 && angulo <= 90){
        printf("Primeiro quadrante\n");
    }
    else if(angulo >= 91 && angulo <= 180){
        printf("Segundo quadrante\n");
    }
    else if(angulo >= 181 && angulo <= 270){
        printf("Terceiro quadrante\n");
    }
    else if(angulo >= 271 && angulo <= 360){
        printf("Quarto quadrante");
    }
    return 0;
}
