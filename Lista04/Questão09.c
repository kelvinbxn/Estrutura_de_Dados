#include <stdio.h>
/*
*/
int main(){
    int n,fib1=1,fib2=1,soma;
    printf("Digite o valor de N: ");
    scanf("%i", &n);

    printf("1 1 ");
    for(int i=0;i<n;i++){
        soma = fib1 + fib2;
        fib1 = fib2;
        fib2 = soma;
        printf("%i ",fib2);
    }
    return 0;
}
