#include <stdio.h>
/*Leia 2 datas (dia, mês e ano) e escreva qual delas é a mais recente
*/
int main(){
    int dia1, mes1, ano1, dia2, mes2, ano2, resto;

    printf("Escreva a Primeira data Ex(31 07 2007): ");
    scanf("%i %i %i", &dia1, &mes1, &ano1);
    printf("Escreva a Segunda data Ex(31 07 2007): ");
    scanf("%i %i %i", &dia2, &mes2, &ano2);

    if(ano1 == ano2){
        if(mes1 == mes2){
            if(dia1 > dia2){
                    printf("A primeira data eh mais recente");
            }
            else if(dia2 > dia1){
                printf("A segunda data eh mais recente");
            }
        }
        else if(mes1 > mes2){
            printf("A primeira data eh mais recente");
        }
        else if(mes2 > mes1){
            printf("A segunda data eh mais recente");
        }
    }
    else if(ano1 > ano2){
        printf("A primeira data eh mais recente");
    }
    else if(ano2 > ano1){
        printf("A segunda data eh mais recente");
    }
    return 0;
}
