#include <stdio.h>
/*Leia o valor do raio de uma circunferência,
calcule e escreva seu comprimento.(c = 2 * pi *r)
*/
int main(){
    float raio, comprimento;

    printf("Digite o valor do Raio: ");
    scanf("%f", &raio);
    comprimento = 2 * 3.14 * raio;

    printf("O comprimento eh de: %0.2f", comprimento);
    return 0;
}
