#include <stdio.h>
/*Leia a hora do in�cio de um jogo e a hora de fim do jogo (cada hora � composta por 2 vari�veis inteiras: hora e
minuto). Calcule e escreva a dura��o do jogo (horas e minutos), sabendo-se que o tempo m�ximo de dura��o do
jogo � de 24 horas e que ele pode iniciar-se em um dia e terminar no dia seguinte.
*/
int main(){
    int horaInicio, minutoInicio, horaFinal, minutoFinal, duracaoH, duracaoM;

    printf("Digite a Hora e Minutos que o jogo iniciou, EX: 13 45 >>> ");
    scanf("%i %i", &horaInicio, &minutoInicio);
    printf("Digite a Hora e Minutos que o jogo acabou, EX: 15 00 >>>> ");
    scanf("%i %i", &horaFinal, &minutoFinal);

    if(minutoInicio <= minutoFinal){
        duracaoM = minutoInicio - minutoFinal;
    }
    if(horaFinal < horaInicio){
        duracaoH = (horaFinal + 24) - horaInicio;
        if(minutoInicio > minutoFinal){
            duracaoH -= 1;
            duracaoM = (minutoFinal + 60) - minutoInicio;
        }
        else if(minutoInicio <= minutoFinal){
            duracaoM = minutoFinal - minutoInicio;
        }
    }
    else if(horaInicio < horaFinal){
        duracaoH = horaFinal - horaInicio;
        if(minutoInicio > minutoFinal){
            duracaoH -= 1;
            duracaoM = (minutoFinal + 60) - minutoInicio;
        }
        else if(minutoInicio <= minutoFinal){
            duracaoH += 1;
            duracaoM = minutoFinal - minutoInicio;
        }
    }
    printf("O jogo teve a dura��o de %i Hora(s) e %i Minuto(s)\n", duracaoH, duracaoM);
    return 0;
}
