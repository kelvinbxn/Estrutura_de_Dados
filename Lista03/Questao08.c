#include <stdio.h>
#include <string.h>
/*Confira o resultado de uma competi��o de nata��o entre dois clubes. O programa deve ler o n�mero da
prova e a quantidade de nadadores. O fim dos dados � indicado pelo n�mero da prova igual a 0 e
quantidade de nadadores igual a 0. A seguir, para cada nadador dever� ler nome, classifica��o, tempo,
clube (�a� ou �b�) e determinar os pontos obtidos por cada clube, de acordo com o seguinte crit�rio:
*/
int main(){
    int numeroProva=1, nadadores=1, classificacao, pontoA=0, pontoB=0;
    float tempo;
    char nome[50], time[50];

    while(numeroProva != 0 && nadadores != 0){
        printf("Digite o numero da prova: ");
        scanf("%i", &numeroProva);
        printf("Digite a quantidade de nadadores: ");
        scanf("%i", &nadadores);

        while(nadadores > 0){
            printf("Nome: ");
            scanf("%s", &nome);
            printf("Classificacao: ");
            scanf("%i", &classificacao);
            printf("Tempo: ");
            scanf("%f", &tempo);
            printf("Clube: ");
            scanf("%s", &time);
            if(classificacao == 1){
                if(strcmp(time,"a")==0){
                    pontoA += 9;
                }
                else{
                    pontoB += 9;
                }
            }
            else if(classificacao == 2){
                if(strcmp(time,"a")==0){
                    pontoA += 6;
                }
                else{
                    pontoB += 6;
                }
            }
            else if(classificacao == 3){
                if(strcmp(time,"a")==0){
                    pontoA += 4;
                }
                else{
                    pontoB += 4;
                }
            }
            else if(classificacao == 4){
                if(strcmp(time,"a")==0){
                    pontoA += 3;
                }
                else{
                    pontoB += 3;
                }
            }
        nadadores -= 1;
        }
        printf("Digite o numero da prova: ");
        scanf("%i", &numeroProva);
        printf("Digite a quantidade de nadadores: ");
        scanf("%i", &nadadores);
    }
    printf("Pontos do clube A >> %i\n", pontoA);
    printf("Pontos do clube B >> %i\n", pontoB);
    return 0;
}
