#include <stdio.h>
/*Leia uma lista de n�meros e que para cada n�mero lido, escreva o pr�prio n�mero e a rela��o de seus
divisores. (flag n�mero = 0).
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
