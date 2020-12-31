#include <stdio.h>
/*Leia N , LimiteSuperior e LimiteInferior e
escreva todos os múltiplos de N entre os limites lidos.
*/
int main(){
    int numero, limiteSup, limiteInf;

    printf("Valor de N: ");
    scanf("%i", &numero);
    printf("Limite superior: ");
    scanf("%i", &limiteSup);
    printf("Limite inferior: ");
    scanf("%i", &limiteInf);
    limiteInf = limiteInf + 1;

    while(limiteInf < limiteSup){
        if(limiteInf % numero == 0){
            printf("%i\n", limiteInf);
        }
        limiteInf = limiteInf + 1;
    }
}
