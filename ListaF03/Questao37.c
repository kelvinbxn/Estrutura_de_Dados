#include <stdio.h>
/*Escreva a tabuada dos números de 1 a 10.
*/
int main(){
    int numero,i;

    for(i = 1; i <= 10; i++){
        for(int j = 1; j <=10; j++){
            printf("%i X %i = %i\n", i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}
