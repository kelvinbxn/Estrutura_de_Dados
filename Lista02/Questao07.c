#include <stdio.h>
/*Leia duas notas de um aluno e escreva na tela a palavra “Aprovado” se a média das duas notas for maior ou igual a
7,0. Caso a média seja inferior a 7,0, o programa deve ler a nota do exame final e calcular a média final. Se esta
média for maior ou igual a 6,0, o programa deve escrever “Aprovado”, caso contrário deve escrever “Reprovado”.
*/
int main(){
    float nota1, nota2, media, notaFinal;

    printf("Digite a 1 nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a 2 nota do aluno: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;

    if(media >= 7){
        printf("Aprovado!!!!\n");
    }
    else if(media < 7){
        printf("Exame Final   \n");
        printf("Digite a nota Final do aluno: ");
        scanf("%f", &notaFinal);
        media = (media + notaFinal) / 2;

        if(media >= 6){
            printf("Aprovado!!!!\n");
        }
        else{
            printf("Reprovado!!!!");
        }
    }
    return 0;
}
