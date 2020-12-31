#include <stdio.h>
/*Escreva a matriz identidade de ordem N
*/
int main(){
    int n;
    printf("Digite o valor de N: ");
    scanf("%i", &n);
    int matriz[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j){
                matriz[i][j] = 1;
            }
            else{
                matriz[i][j] = 0;
            }
        }
    }
    printf("\nMatriz identidade de ordem %i\n",n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%i ", matriz[j][i]);
        }
        printf("\n");
    }
    return 0;
}
