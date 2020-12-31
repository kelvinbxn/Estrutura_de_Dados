#include <stdio.h>
/*Leia um número N, calcule e escreva os N primeiros termos de seqüência de Fibonacci
(0,1,1,2,3,5,8,...). O valor lido para N sempre será maior ou igual a 2.
*/
int main(){
    int n, t1=0,t2=1,t3;
    printf("Valor de N: ");
    scanf("%i", &n);
    printf("%i %i", t1,t2);

    while(n > 2){
        t3 = t1 + t2;
        printf(" %i", t3);
        t1 = t2;
        t2 = t3;
        n -= 1;
    }
    return 0;
}
