#include <stdio.h>
/*Leia um n�mero N, some todos os n�meros inteiros entre 1 e N e escreva o resultado obtido.
*/
int main(){
    int n, soma=0;

    printf("Digite um valor: ");
    scanf("%i", &n);

    for(int i = 1; i <= n; i++){
        soma = soma + i;
    }
    printf("Soma: %i", soma);
    return 0;
}
