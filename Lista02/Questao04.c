#include <stdio.h>
/*Leia 3 (tr�s) n�meros (cada n�mero corresponde a um �ngulo interno do tri�ngulo), verifique e escreva se os 3
(tr�s) n�meros formam um tri�ngulo (a soma dos �ngulos internos � igual a 180o). Se formam, verifique se formam
um tri�ngulo acut�ngulo (3 �ngulos < 90o), ret�ngulo (1 �ngulo = 90o) ou obtus�ngulo (1 �ngulo > 90o). N�o existe
�ngulo com tamanho 0o (zero grau).
*/
int main(){
    int x, y, z, angulo;

    printf("Digite o valor dos 3 angulos: ")/
    scanf("%i %i %i", &x, &y, &z);
    angulo = x + y + z;

    if(x == 0 || y == 0 || z == 0){
        printf("N�o existe angulo com tamanho de 0!!!!\n");
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
