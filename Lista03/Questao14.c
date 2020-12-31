#include <stdio.h>
/*Emita o resultado de uma pesquisa de opinião pública a respeito das eleições presidenciais. O
entrevistado deverá escolher entre 3 candidatos (Serra=45, Dilma=13 ou Ciro Gomes=23), ou então
responder: indeciso=99, outros=98, nulo/branco=0. O programa deve ler a opinião de voto de cada
entrevistado, encerrando-se a pesquisa com a opinião sendo igual a –1. Ao final, devem ser mostrados:
*/
int main(){
    int serra=0, dilma=0, ciro=0, indeciso=0, outros=0, nulo=0;
    int voto, total=0;
    float serraPorcento, dilmaPorcento, ciroPorcento, indecisoPorcento, outroPorcento, nuloPorcento;
    printf("Digite o seu voto: ");
    scanf("%i", &voto);

    while(voto != -1){
        if(voto == 45){
            serra += 1;
        }
        else if(voto == 13){
            dilma += 1;
        }
        else if(voto == 23){
            ciro += 1;
        }
        else if(voto == 99){
            indeciso += 1;
        }
        else if(voto == 98){
            outros += 1;
        }
        else if(voto == 0){
            nulo += 1;
        }
        total += 1;
        printf("Digite o seu voto: ");
        scanf("%i", &voto);
    }
    serraPorcento = serra / (total / 100.00);
    dilmaPorcento = dilma / (total / 100.00);
    ciroPorcento = ciro / (total / 100.00);
    outroPorcento = outros / (total / 100.00);
    indecisoPorcento = indeciso / (total / 100.00);
    nuloPorcento = nulo / (total / 100.00);

    printf("Porcentagem do Serra: %0.2f\n", serraPorcento);
    printf("Porcentagem da Dilma: %0.2f\n", dilmaPorcento);
    printf("Porcentagem do Ciro: %0.2f\n", ciroPorcento);
    printf("Porcentagem de Outros candidato: %0.2f\n", outroPorcento);
    printf("Porcentagem de Indecisos: %0.2f\n", indecisoPorcento);
    printf("Porcentagem de Brancos + nulos: %0.2f\n", soma);

    if(serraPorcento >= 51 || dilmaPorcento >= 51 || ciroPorcento >= 51){
        printf("Nao havera segundo turno!!!");
    }
    else{
        printf("Havera segundo turno!!!");
    }

    return 0;
}
