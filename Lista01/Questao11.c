#include <stdio.h>
/*Leia o valor da base e altura de um ret�ngulo,
calcule e escreva sua �rea. (�rea = base * altura)
*/
int main (){
    float area, base, altura;

    printf("Digite o valor da base: ");
    scanf("%f", &base);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);
    area = base * altura;

    printf("A area do retangulo eh: %0.2f", area);
    return 0;
}
