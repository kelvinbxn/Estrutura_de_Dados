#include <stdio.h>
/*Leia um vetor A com N elementos e escreva um vetor B com N elementos, conforme a seguinte condi��o:
se �ndice de A[�ndice] � par ent�o B[�ndice] = 0, caso contr�rio B[�ndice] = 1.
*/
int main(){
    int n;
    printf("Valor de N: ");
    scanf("%i", &n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        printf("Digite o valor %i de A: ", i);
        scanf("%i", &a[i]);
        if(a[i] % 2 == 0){
            b[i] = 0;
        }
        else{
            b[i] = 1;
        }
    }
    printf("Vetor B: ");
    for(int i=0;i<n;i++){
        printf("%i ",b[i]);
    }
    return 0;
}
