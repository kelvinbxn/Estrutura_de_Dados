#include <stdio.h>
/*Leia um numero X e, a seguir, leia e escreva uma lista de números com o término da lista ocorrendo
quando a soma de dois números consecutivos da lista for igual a X.
*/
int main(){
    int x, tentativa1, tentativa2, soma;
    printf("Digite o valor de x: ");
    scanf("%i", &x);
    soma = 0;

    while(soma != x){
        printf("Digite um valor: ");
        scanf("%i", &tentativa1);
        soma = tentativa1 + tentativa2;
        tentativa2 = tentativa1;
    }
    printf("%i", tentativa1);
    return 0;
}
