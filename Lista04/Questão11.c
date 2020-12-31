#include <stdio.h>
/*Leia uma matriz quadrada de ordem N, calcule e escreva sua matriz transposta
*/
int main(){
    int n;
    printf("Digite o valor de N: ");
    scanf("%i", &n);
    int matriz[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Digite o valor da posicao [%i][%i]: ", i,j);
            scanf("%i", &matriz[i][j]);
        }
    }
    printf("\nMatriz: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\nMatriz transposta: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%i ", matriz[j][i]);
        }
        printf("\n");
    }
    return 0;
}
