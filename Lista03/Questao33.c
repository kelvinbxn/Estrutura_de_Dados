#include <stdio.h>
/*Leia N e escreva todos os números inteiros pares de 1 a N.
*/
int main(){
    int numero, contador=1;
    printf("Digite um valor: ");
    scanf("%i", &numero);

    while(contador <= numero){
        if(contador % 2 == 0){
            printf("%i\n", contador);
        }
        contador += 1;
    }
    return 0;
}
