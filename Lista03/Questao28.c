#include <stdio.h>
#include <time.h>
/*Gere um n�mero aleat�rio inteiro e solicite um n�mero ao usu�rio. O objetivo � que o usu�rio acerte o
n�mero gerado. Se o n�mero digitado for menor que o gerado, escreva �Maior�, se for maior, escreva
�Menor�, e solicite novamente um n�mero ao usu�rio. Repita este processo ate que o usu�rio acerte o
n�mero gerado. Ap�s isso, escreva em quantas tentativas o usu�rio acertou.
*/
int main(){
	int numero_random = 0, numero_pensado = 0, total_tentativas = 0;
	srand(time(NULL));
	numero_random = rand() % 50;
	while(1){
		printf("Numero que voce pensou: ");
		scanf("%i", &numero_pensado);
		if(numero_pensado < numero_random){
			printf("Maior\n");
		}
		if(numero_pensado > numero_random){
			printf("Menor\n");
		}
		if(numero_random == numero_pensado){
			break;
		}
		total_tentativas += 1;
	}
	printf("Voce tentou %i vezes", total_tentativas);
    return 0;
}


