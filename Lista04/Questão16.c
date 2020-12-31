#include <stdio.h>
/*
*/
int main(){
    int n,aux=0;
    printf("Digite o valor de N: ");
    scanf("%i", &n);
    int matriz[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Digite o valor da posicao [%i][%i]: ", i,j);
            scanf("%i", &matriz[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matriz[i][j] == matriz[j][i]){
                aux += 0;
            }
            else if(matriz[i][j] != matriz[j][i]){
                aux += 1;
            }
        }
    }
    if(aux >= 1){
        printf("\nNao eh uma Matriz simetrica!");
    }
    else if(aux == 0){
        printf("\nEh uma Matriz simetrica!");
    }
    return 0;
}
