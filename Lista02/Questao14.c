#include <stdio.h>
/*Determine a idade de uma pessoa, em anos, meses e dias, dadas a data (dia, mês e ano) do seu nascimento e a data
(dia, mês e ano) atual.
*/
int main(){
    int dianasceu, mesnasceu, anonasceu, diaatual, mesatual, anoatual, dia, mes, ano;

    printf("Informe a sua data de nascimento Ex(14 06 2000): ");
    scanf("%i %i %i", &dianasceu, &mesnasceu, &anonasceu);
    printf("Informe a data tual: ");
    scanf("%i %i %i", &diaatual, &mesatual, &anoatual);

    ano = anoatual - anonasceu;
    if(mesatual == mesnasceu){
        mes = 0;
    }
    else if (mesnasceu > mesatual){
        ano -= 1;
        mes = (mesatual + 12) - mesnasceu;
    }
    else if (mesnasceu < mesatual){
        mes = mesatual - mesnasceu;
    }
    if(dianasceu == diaatual){
        dia = 0;
    }
    else if(dianasceu > diaatual){
        dia = (diaatual + 30) - dianasceu;
    }
    else if(dianasceu < diaatual){
        dia = diaatual - dianasceu;
    }
    printf("%i Ano(s) %i Mes(es) %i Dia(s)", ano, mes, dia);
    return 0;
}
