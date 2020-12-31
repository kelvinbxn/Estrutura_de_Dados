#include <stdio.h>
/*Leia data atual (dia, mês e ano) e data de nascimento (dia, mês e ano) de uma pessoa, calcule e escreva sua idade
exata (em anos).
*/
int main(){
    int diaAtual, mesAtual, anoAtual, diaNasc, mesNasc, anoNasc;
    int anoIdade, mesIdade, diaIdade;

    printf("Digite a data atual EX(30 11 2020): ");
    scanf("%i %i %i", &diaAtual, &mesAtual, &anoAtual);
    printf("Digite a sua nata de nascimento EX(14 06 2000): ");
    scanf("%i %i %i", &diaNasc, &mesNasc, &anoNasc);

    if(mesAtual > mesNasc){
        anoIdade = anoAtual - anoNasc;
        printf("%i",anoIdade);
    }
    else if(mesAtual < mesNasc){
        anoIdade = (anoAtual - anoNasc) - 1;
        printf("%i", anoIdade);
    }
    else if(mesAtual == mesNasc){
        if(diaAtual >= diaNasc){
            anoIdade = anoAtual - anoNasc;
            printf("%i", anoIdade);
        }
        else{
            anoIdade = (anoAtual - anoNasc) - 1;
            printf("%i", anoIdade);
        }
    }
    else if(mesAtual < mesNasc){
        anoIdade = (anoAtual - anoIdade) - 1;
        printf("%i", anoIdade);
    }
    return 0;
}
