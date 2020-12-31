#include <stdio.h>
/*Leia vários códigos do jogador (1 ou 2) que ganhou o ponto, em uma partida de pingue-pongue, e
responda quem ganha a partida. A partida chega ao final se:
 Um dos jogadores chega a 21 pontos e a diferença de pontos entre os jogadores é maior ou igual a 2.
 Se a primeira não for atendida, ganha aquele que, com mais de 21 pontos, consiga colocar uma
diferença de 2 pontos sobre o adversário
*/
int main(){
    int jogador1=0, jogador2=0, diferenca, ponto, resultado=1;

    while(resultado != 0){
        diferenca = jogador1 - jogador2;
        printf("Qual jogador fez o ponto: ");
        scanf("%i", &ponto);
        if(ponto == 1){
            jogador1 += 1;
        }
        else if(ponto == 2){
            jogador2 += 1;
        }
        if(jogador1 >= 5 || jogador2 >= 5 && diferenca >= 2 || diferenca <= -2){
            resultado = 0;
        }
    }
    if(jogador1 > jogador2){
        printf("O Jogador 1 Venceu!!!");
    }
    else{
        printf("O Jogador 2 Venceu!!!");
    }
    return 0;
}
