#include <stdio.h>
/*Leia 3 notas de um aluno e o peso
de cada nota, calcule e escreva a média ponderada.
*/
int main(){

    float nota1, nota2, nota3, peso1, peso2, peso3, media;

    printf("Digite a nota e o peso da Primeira prova: ");
    scanf("%f %f", &nota1, &peso1);
    printf("Digite a nota e o peso da Segunda prova: ");
    scanf("%f %f", &nota2, &peso2);
    printf("Digite a nota e o peso da Terceira prova: ");
    scanf("%f %f", &nota3, &peso3);

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf("A media ponderada eh: %0.2f", media);
    return 0;
}
