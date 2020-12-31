#include <stdio.h>
/*Leia N, calcule e escreva o maior quadrado menor ou igual a N. Por exemplo, se N for igual a 38, o
maior quadrado menor que 38 é 36 (quadrado de 6).
*/
int main(){
    int n, quadrado=0,contador=1,parada=1;
    printf("Valor de N: ");
    scanf("%i", &n);

    while(quadrado < n && parada == 1){
        quadrado = contador * contador;
        if(quadrado > n){
            quadrado = ((contador-1) * (contador -1));
            parada = 0;
        }
        contador += 1;
    }
    printf("Quadrado: %i", quadrado);
    return 0;
}
