#include <stdio.h>
/*Leia  uma  matriz  quadrada  de  ordem  N  e  encontre  a
linha  que  possui  a  maior  e  a  menor  soma  doselementos
*/
int main(){
    int n,somaMaior=0,aux=0,aux1,posicaoM=0,somaMeno=9999999,posicaoMe=0;
    printf("Digite o valor de N: ");
    scanf("%i", &n);
    int matriz[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Digite o valor da posicao [%i][%i]: ",i,j);
            scanf("%i", &matriz[i][j]);
            aux = aux + matriz[i][j];
            aux1 = aux1 + matriz[i][j];
        }
        if(aux > somaMaior){
            posicaoM = i;
            somaMaior = aux;
            aux = 0;
        }
        if(aux1 <= somaMeno){
            posicaoMe = i;
            somaMeno = aux1;
            aux1 = 0;
        }
        else{
            aux = 0;
            aux1=0;
        }
    }
    printf("Linha com maior soma: %i\nLinha com menor soma: %i", posicaoM,posicaoMe);
    return 0;
}
