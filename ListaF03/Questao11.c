#include <stdio.h>
/*Leia informa��es de alunos (matr�cula, nota1, nota2, nota3) com o fim das informa��es indicado por
matr�cula = 0. Para cada aluno deve ser calculada a m�dia final de acordo com a seguinte f�rmula:
M�dia Final = (2 * nota1) + (3 * nota2) + (5 * nota3)Se a m�dia final for igual ou superior a 7, o aluno est� aprovado; se a m�dia final for inferior a 7, o
aluno est� reprovado. Ao final devem ser mostrados o total de aprovados, o total de reprovados e o total
de alunos da turma.
10
*/
int main(){
    int matricula, aprovados=0, reprovados=0;
    float nota1, nota2, nota3, mediafinal;

    printf("Digite a Matricula: ");
    scanf("%i", &matricula);

    while(matricula > 0){
        printf("Digite o valor da Primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite o valor da Segunda nota: ");
        scanf("%f", &nota2);
        printf("Digite o valor da Terceira nota: ");
        scanf("%f", &nota3);

        mediafinal = ((2 * nota1) + (3 * nota2) + (5 * nota3)) / 10;
        printf("Media final: %0.2f\n", mediafinal);
        if(mediafinal >= 7){
            printf("Aluno aprovado!!\n\n");
            aprovados += 1;
        }
        else{
            printf("Aluno Reprovado!!\n\n");
            reprovados += 1;
        }
        printf("Digite a Matricula: \n");
        scanf("%i", &matricula);
    }
    printf("==================\n");
    printf("Total de Aprovados: %i\n", aprovados);
    printf("Total de Reprovados: %i\n\n", reprovados);
    return 0;
}
