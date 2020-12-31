#include <stdio.h>
/*Leia LimiteSuperior e LimiteInferior e escreva todos os números primos entre os limites lidos.
*/
int main(){
    int limiteSup, limiteInf;
    printf("Digite o valor de Limite Superior e Limite Inferior: ");
    scanf("%i %i", &limiteSup, &limiteInf);

    while(limiteInf < limiteSup){
        int contador = 0;
        if(limiteInf % 1 == 0){
            contador += 1;
        }
        if(limiteInf % 2 == 0 && limiteInf != 2){
            contador += 1;
        }
        if(limiteInf % 3 == 0 && limiteInf != 3){
            contador += 1;
        }
        if(limiteInf % 4 == 0){
            contador += 1;
        }
        if(limiteInf % 5 == 0 && limiteInf != 5){
            contador += 1;
        }
        if(limiteInf % 6 == 0){
            contador += 1;
        }
        if(limiteInf % 7 == 0 && limiteInf != 7){
            contador += 1;
        }
        if(limiteInf % 8 == 0){
            contador += 1;
        }
        if(limiteInf % 9 == 0){
            contador += 1;
        }
        if(limiteInf % limiteInf == 0){
            contador += 1;
        }
        if(contador == 2){
            printf("%i\n", limiteInf);
        }
        limiteInf += 1;
    }
    return 0;
}
