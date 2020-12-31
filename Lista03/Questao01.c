#include <stdio.h>
/*Leia uma lista de números e que para cada número lido, escreva o próprio número e a relação de seus
divisores. (flag número = 0).
*/
int main(){
    int numero = 1, valor;
    printf("Digite um numero: ");
    scanf("%i", &numero);

    while(numero != 0){
        for(valor = numero; valor > 0; valor = valor - 1){
            if(numero % valor == 0){
                printf("%i\n", valor);
            }
        }
        printf("Digite um numero: ");
        scanf("%i", &numero);
    }
    printf("\nFim");
    return 0;
}
