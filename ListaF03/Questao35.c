#include <stdio.h>
/*Leia as variáveis A0, Limite e R e escreva os valores menores que Limite gerados pela Progressão
Aritmética que tem por valor inicial A0 e razão R.
*/
int main(){
    int a, limite, razao;

    printf("Digite o valor de A: ");
    scanf("%i", &a);
    printf("Digite o valor de Limite: ");
    scanf("%i", &limite);
    printf("Digite o valor de Razao: ");
    scanf("%i", &razao);

    while(a <= limite){
        printf("%i\n", a);
        a = a * razao;
    }
    return 0;
}
