#include <stdio.h>
/*
*/
int main(){
    int aux=01,matriz[5][5];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            matriz[i][j] = aux;
            aux = aux + 01;
        }
    }
    printf("Matriz: \n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(matriz[i][j] <= 9){
                printf("0%i ",matriz[i][j]);
            }
            else{
            printf("%i ",matriz[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
