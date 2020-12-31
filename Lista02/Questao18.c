#include <stdio.h>
#include <string.h>
/*Leia o turno em que um aluno estuda, sendo M para matutino, V para Vespertino ou N para Noturno e escreva a
mensagem "Bom Dia!", "Boa Tarde!", "Boa Noite!" ou "Valor Inválido!", conforme o caso.
*/
int main(){
    char turno[50];

    printf("===== Menu =====\n'M' - Matutino\n'V' - Vespertino\n'N' - Noturno\nEsolha: ");
    scanf("%s", &turno);

    if(strcmp(turno,"M")==0){
        printf("Bom Dia!");
    }
    else if(strcmp(turno,"V")==0){
        printf("boa Tarde!");
    }
    else if(strcmp(turno,"N")==0){
        printf("Boa Noite!");
    }
    else{
        printf("Valor Invalido");
    }
    return 0;
}
