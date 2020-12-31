#include <stdio.h>
/*Leia as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre, e calcule a sua média.
A atribuição de conceitos obedece à tabela abaixo:
Entre 9.0 e 10.0 A
Entre 7.5 e 9.0 B
Entre 6.0 e 7.5 C
Entre 4.0 e 6.0 D
Entre 4.0 e zero E
O programa deve mostrar na tela as notas, a média, o conceito correspondente e a mensagem
“APROVADO” se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E.
*/
int main(){
    float nota1, nota2, media;

    printf("Digite o valor da Primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite o valor da Segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;

    printf("\nNota da Primeira prova: %0.2f\nNota da Segunda prova: %0.2f\nMedia: %0.2f\n\n",nota1,nota2,media);
    printf("Entre 9.0 e 10.0 A\nEntre 7.5 e 9.0 B\nEntre 6.0 e 7.5 C\nEntre 4.0 e 6.0 D\nEntre 4.0 e zero E\n\n");

    if(media >= 9 && media <= 10){
        printf("Aprovado\n");
    }
    else if(media >= 7.5 && media <= 8.9){
        printf("Aprovado\n");
    }
    else if(media >= 6 && media <= 7.4){
        printf("Aprovado\n");
    }
    else if(media >= 4 && media <= 5.9){
        printf("Reprovado\n");
    }
    else if(media <= 4 && media >= 0){
        printf("Reprovado\n");
    }
    else{
        printf("Media invalida\n");
    }
    return 0;
}
