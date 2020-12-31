#include <stdio.h>;
/*Leia 2 vetores A e B com N elementos, escreva o conjunto união entre os vetores A e B; e o conjunto
interseção entre os vetores A e B.
*/
int main(){
    int n;
    printf("Tamanho de N: ");
    scanf("%i", &n);
    int a[n],b[n];

    for(int i=0;i<n;i++){
        printf("Digite o %i de A: ", i);
        scanf("%i", &a[i]);
        printf("Digite o %i de B: ", i);
        scanf("%i", &b[i]);
    }

    printf("Conjunto intersecao de A e B: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i] == b[j]){
                printf("%i ", b[j]);
            }
        }
    }
    return 0;
}
