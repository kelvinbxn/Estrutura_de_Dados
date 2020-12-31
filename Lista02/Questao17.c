#include <stdio.h>
/*Leia o preço de três produtos e informe qual produto deve ser comprado, sabendo que a decisão é sempre pelo
mais barato.
*/
int main(){
    float a,b,c;

    printf("Digite o valor do Primeiro produto: ");
    scanf("%f", &a);
    printf("Digite o valor do Segundo produto: ");
    scanf("%f", &b);
    printf("Digite o valor do Terceiro produto: ");
    scanf("%f", &c);

    if(a == b && b == c){
        printf("O valor dos tres produtos sao iguais");
    }
    else if(a <= b && a <= c){
        printf("Deve-se compar o Primeiro produto");
    }
    else if(b <= a && b <= c){
        printf("Deve-se comprar o Segundo produto");
    }
    else if(c <= a && c <= b){
        printf("Deve-se comprar o Terceiro produto");
    }
    return 0;
}
