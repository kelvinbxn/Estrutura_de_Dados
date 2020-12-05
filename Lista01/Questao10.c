#include <stdio.h>
/*Leia o valor do lado de um quadrado, calcule e
escreva sua área. (área = lado2)
*/
int main(){
    float lado, area;

    printf("Digite o valor do lado de um quadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    printf("A area do teclado eh: %0.2f\n", area);
    return 0;
}
