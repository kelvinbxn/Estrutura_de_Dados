#include <stdio.h>
/*Leia uma matriz quadrada de ordem N, calcule e escreva a soma dos elementos da diagonal principal, a
soma dos elementos da diagonal secund�ria e a soma dos elementos que n�o est�o na diagonal principal nem
na diagonal secund�ria
*/
int main(){
    int n,soma=0;
    printf("Digite o valor de N: ");
    scanf("%i", &n);
    int matriz[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Digite o valor da posicao [%i][%i]: ", i,j);
            scanf("%i", &matriz[i][j]);
            if(i == j || i + j == n - 1){
                soma = soma + matriz[i][j];
            }
        }
    }
    printf("\nMatriz:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\nSoma: %i",soma);
    return 0;
}
