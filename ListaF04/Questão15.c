#include <stdio.h>
/*Leia uma matriz quadrada de ordem N, determine e escreva o maior e o menor elemento da matriz e suas
respectivas posições (linha, coluna).
*/
int main(){
    int n, maior=0,menor=999999,posicaoMaiorL,posicaoMaiorC,posicaoMenorL,posicaoMenorC;
    printf("Digite o valor de N: ");
    scanf("%i", &n);
    int matriz[n][n];

    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Digite o valor da posicao [%i][%i]: ",i,j);
            scanf("%i", &matriz[i][j]);
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                posicaoMaiorL = i;
                posicaoMaiorC = j;
            }
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
                posicaoMenorL = i;
                posicaoMenorC = j;
            }
        }
    }
    printf("\n\nMaior numero: %i\nSua posicao: [%i][%i]",maior,posicaoMaiorL,posicaoMaiorC);
    printf("\n\nMenor numero: %i\nSua posicao: [%i][%i]\n\n",menor,posicaoMenorL,posicaoMenorC);
    return 0;
}
