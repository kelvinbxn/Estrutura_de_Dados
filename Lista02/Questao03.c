#include <stdio.h>
/*Leia 3 (três) números e escreva-os em ordem crescente.
*/
int main(){
    float x, y, z;

    printf("Digite 3 valores para aparecer em ordem crescente: ");
    scanf("%f %f %f", &x, &y, &z);

    if(x == y == z){
        printf("Os 3 valores sao iguais!!!!");
    }
    else{
        if(x >= y && y >= z){
            printf("%0.2f > %0.2f > %0.2f", z, y, x);
        }
        else if(x >= z && z >= y){
            printf("%0.2f > %0.2f > %0.2f", y, z, x);
        }
        else if(y >= x && x >= z){
            printf("%0.2f > %0.2f > %0.2f", z, x, y);
        }
        else if(y >= z && z >= x){
            printf("%0.2f > %0.2f > %0.2f", x, z, y);
        }
        else if(z >= x && x >= y){
            printf("%0.2f > %0.2f > %0.2f", y, x, z);
        }
        else if(z >= y && y >= x){
            printf("%0.2f > %0.2f > %0.2f", x, y, z);
        }
    }
    return 0;
}
