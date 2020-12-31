#include <stdio.h>
/*Leia LimiteSuperior e LimiteInferior e escreva todos os números pares entre os limites lidos.
*/
int main(){
    int limiteSup, limiteInf;

    printf("Limite superior: ");
    scanf("%i", &limiteSup);
    printf("Limite inferior: ");
    scanf("%i", &limiteInf);
    limiteInf = limiteInf + 1;

    while(limiteInf < limiteSup){
        if(limiteInf % 2 == 0){
            printf("%i\n", limiteInf);
        }
        limiteInf = limiteInf + 1;
    }
}
