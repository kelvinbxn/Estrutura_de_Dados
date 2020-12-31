#include <stdio.h>
/*Em uma eleição presidencial existem 3 (três) candidatos. Os votos são informados através de
Códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
1, 2, 3 = voto para os respectivos candidatos; ·
9 = voto nulo;
0 = voto em branco;
Escreva um programa que leia o código votado por N eleitores. Ao final, calcule e escreva:
 total de votos para cada candidato;
 total de votos nulos;
 total de votos em branco;
 quem venceu a eleição.
*/
int main(){
    int n, eleitores, candidatoA=0, candidatoB=0, candidatoC=0,nulo=0, voto;
    printf("Numero de eleitores: ");
    scanf("%i", &n);
    eleitores = n;
    while(n > 0){
        printf("Voto: ");
        scanf("%i", &voto);
        if(voto == 1){
            candidatoA = candidatoA + 1;
        }
        else if(voto == 2){
            candidatoB = candidatoB + 1;
        }
        else if(voto == 3){
            candidatoC = candidatoC + 1;
        }
        else if(voto == 9){
            nulo = nulo + 1;
        }
        n -= 1;
    }
    printf("Total de votos candidato A: %i\n",candidatoA);
    printf("Total de votos candidato B: %i\n",candidatoB);
    printf("Total de votos candidato C: %i\n",candidatoC);
    printf("Total de votos Nulos: %i\n",nulo);
    if(candidatoA >= candidatoB && candidatoA >= candidatoC){
        printf("Candidato A Venceu\n");
    }
    else if(candidatoB >= candidatoA && candidatoB >= candidatoC){
        printf("Candidato A Venceu\n");
    }
    else if(candidatoC >= candidatoB && candidatoC >= candidatoA){
        printf("Candidato A Venceu\n");
    }
    return 0;
}
