#include <stdio.h>
/*Leia uma data (dia, mês e ano), verifique e
escreva se a data é ou não válida.
*/
int main(){
    int dia, mes, ano;

    printf("Digite uma data para saber se eh valida EX(05 12 2014): ");
    scanf("%i %i %i", &dia, &mes, &ano);

    if(mes <= 0 || mes >= 13 || dia <= 0 || dia >= 32){
        printf("Data Invalida!!!!");
    }
    else{
        if(mes == 2 && dia <= 29){
            printf("Data Valida");
        }
        else if(mes == 1 || mes == 3 || mes == 5|| mes == 7 || mes == 8 || mes == 10 || mes == 12){
            if(dia <= 31){
                printf("Data Valida");
            }
            else{
                printf("Data Invalida");
            }
        }
        else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if(dia <= 30){
                printf("Data Valida");
            }
            else{
                printf("Data invalida");
            }
        }
    }
    return 0;
}
