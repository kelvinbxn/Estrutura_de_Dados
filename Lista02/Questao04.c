#include <stdio.h>
/*Leia 3 (três) números (cada número corresponde a um ângulo interno do triângulo), verifique e escreva se os 3
(três) números formam um triângulo (a soma dos ângulos internos é igual a 180o). Se formam, verifique se formam
um triângulo acutângulo (3 ângulos < 90o), retângulo (1 ângulo = 90o) ou obtusângulo (1 ângulo > 90o). Não existe
ângulo com tamanho 0o (zero grau).
*/
int main(){
    int x, y, z, angulo;

    printf("Digite o valor dos 3 angulos: ")/
    scanf("%i %i %i", &x, &y, &z);
    angulo = x + y + z;

    if(x == 0 || y == 0 || z == 0){
        printf("Não existe angulo com tamanho de 0!!!!\n");
    }
    else if(angulo == 180){
        if(x < 90 && y < 90 && z < 90){
            printf("Forma um triangulo acutangulo!!!!\n");
        }
        else if(x == 90 || y == 90 || z == 90){
            printf("Forma um triangulo retangulo!!!!\n");
        }
        else if(x > 90 || y > 90 || z > 90){
            printf("Forma um triangulo obsutangulo!!!!\n");
        }
    }
    else{
        printf("Angulos invalidos!!!!\n");
    }
    return 0;
}
