#include <stdio.h>
/*Leia um número (entre 0 e 255) na base decimal, calcule e escreva este número na base binária e na base
hexadecimal.
*/
int main(){
    int numero,bin[8],aux,numero2;
    printf("Digite o numero em base Decimal: ");
    scanf("%i", &numero);
    numero2 = numero;

    for(aux = 7; aux >= 0; aux--){
        if(numero % 2 == 0){
            bin[aux] = 0;
        }
        else{
            bin[aux] = 1;
        }
        numero = numero / 2;
    }
    printf("Em binario > ");
    for(aux = 0; aux < 8; aux++){
        printf("%d", bin[aux]);
    }
    printf("\nA conversao do numero %i em hexadecimal eh %2X:\n",numero2,numero2);
    return 0;
}
