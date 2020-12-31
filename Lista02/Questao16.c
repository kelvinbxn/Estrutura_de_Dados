#include <stdio.h>
#include <string.h>
/*Leia uma letra e verifique se a letra digitada é vogal ou consoante.
*/
int main(){
    char letra[50];

    printf("Digite uma letra para saber se eh vogal ou consoante: ");
    scanf("%s", &letra);

    if(strcmp(letra,"a")==0 || strcmp(letra,"A")==0 || strcmp(letra,"e")==0 || strcmp(letra,"E")==0){
        printf("Eh Vogal");
    }
    else if(strcmp(letra,"i")==0 || strcmp(letra,"I")==0 || strcmp(letra,"o")==0 || strcmp(letra,"O")==0 || strcmp(letra,"u")==0 || strcmp(letra,"U")==0){
        printf("Eh Vogal");
    }
    else{
        printf("Eh consoante");
    }
    return 0;
}
