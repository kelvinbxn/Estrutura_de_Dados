#include <stdio.h>
/*Leia 2 (dois) números, verifique e escreva o
menor e o maior entre os números lidos.
*/
int main(){
    float x, y;

    printf("Digite dois numeros para saber qual eh o maior: ");
    scanf("%f %f", &x, &y);

    if(x == y){
        printf("Os dois valores sao iguais!!!!\n");
    }
    else{
        if(x > y){
            printf("O maior valor eh: %f\n", x);
        }
        else{
            printf("O maior valor eh: %f\n", y);
        }
    }
    return 0;
}
