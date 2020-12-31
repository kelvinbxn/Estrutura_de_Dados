#include <stdio.h>
#include <string.h>
/*Leia uma letra, verifique se letra é
"F" ou "M" e escreva F - Feminino, M - Masculino, Sexo Inválido.
*/
int main(){
    char letra[50];

    printf("Escolha uma opcao\n'F' - para Feminino\n'M' - Para Masculino\n\nSua opcao >>> ");
    scanf("%s", &letra);

    if(strcmp(letra,"F")==0){
        printf("Feminino");
    }
    else if(strcmp(letra,"M")==0){
        printf("Masculino");
        }
    else{
        printf("Sexo Invalido");
    }
    return 0;
}
