#include <stdio.h>
/*Leia o valor da base e altura de um tri�ngulo,
calcule e escreva sua �rea. (�rea=(base * altura)/2)
*/
int main(){
    float base, altura, area;

    printf("Digite a base do Triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do Triangulo: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;

    printf("A area do triangulo eh: %.02f", area);
    return 0;
}
