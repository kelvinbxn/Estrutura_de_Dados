#include <stdio.h>
/*Leia N, calcule e escreva os N primeiros termos de seqüência (1, 3, 6, 10, 15,...).
*/
int main(){
    int n, lista=1, aux=0;
    printf("Valor de N: ");
    scanf("%i", &n);

    while(n > 0){
        printf("%i\n", lista);
        lista += 2 + aux;
        aux += 1;
        n -= 1;
    }
    return 0;
}
