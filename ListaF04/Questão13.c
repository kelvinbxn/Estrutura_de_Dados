#include <stdio.h>
/*Leia uma matriz quadrada de ordem N, calcule e escreva a soma dos números positivos e a soma dos
números negativos.
*/
int main(){
    int n, somaP=0, somaN=0;
    printf("Digite o valor de N: ");
    scanf("%i", &n);
    int matriz[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Digite o valor da posicao [%i][%i]: ", i,j);
            scanf("%i", &matriz[i][j]);
            if(matriz[i][j] > 0){
                somaP = somaP + matriz[i][j];
            }
            else if(matriz[i][j] < 0){
                somaN = somaN + matriz[i][j];
            }
        }
    }
    printf("\n\nSoma dos positivos: %i\nSoma dos negativos: %i", somaP,somaN);
    return 0;
}
