#include <stdio.h>
#include <time.h>
/*Gere um número aleatório inteiro e solicite um número ao usuário. O objetivo é que o usuário acerte o
número gerado. Se o número digitado for menor que o gerado, escreva “Maior”, se for maior, escreva
“Menor”, e solicite novamente um número ao usuário. Repita este processo ate que o usuário acerte o
número gerado. Após isso, escreva em quantas tentativas o usuário acertou.
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


