#include <stdio.h>
/*Foi feita uma pesquisa de audi�ncia de canal de TV em v�rias casas em Teresina, num certo dia. Para
cada casa visitada, o entrevistado informou o n�mero do canal (2, 4, 5, 7, 10) e o n�mero de pessoas que
estavam assistindo TV. Escreva um programa que leia um n�mero indeterminado de dados (terminando
quando for lido um canal igual a zero) e calcule o percentual de audi�ncia para cada emissora,
mostrando ao final, o n�mero de cada canal e sua respectiva audi�ncia.
*/
int main(){
	int numero_canal = 9, numero_pessoas_assistindo = 0 , total_votos = 0;
	float audiencia_canal_2 = 0, audiencia_canal_4 = 0;
    float audiencia_canal_5 = 0, audiencia_canal_7 = 0;
    float audiencia_canal_10 = 0;

	while(numero_canal != 0){

		printf("Numero do canal: ");
		scanf("%i",&numero_canal);
		if(numero_canal == 2){
			audiencia_canal_2 += 1;
		}
		else if(numero_canal == 4){
			audiencia_canal_4 += 1;
		}
		else if(numero_canal == 5){
			audiencia_canal_5 += 1;
		}
		else if(numero_canal == 7){
			audiencia_canal_7 += 1;
		}
		else if(numero_canal == 10){
			audiencia_canal_10 += 1;
		}
		else{
			printf("Valor invalido");
		}
		if(numero_canal == 0){
			break;
		}
		printf("Numero de pessoas assistindo: ");
		scanf("%i",&numero_pessoas_assistindo);
		total_votos += 1;
		printf("\n");
	}
	printf("\nPorcentagem do canal 2: %0.2f ", (audiencia_canal_2/total_votos)/100);
	printf("\nPorcentagem do canal 4: %0.2f", (audiencia_canal_4/total_votos)/100);
	printf("\nPorcentagem do canal 5: %0.2f", (audiencia_canal_5/total_votos)/100);
	printf("\nPorcentagem do canal 7: %0.2f", (audiencia_canal_7/total_votos)/100);
	printf("\nPorcentagem do canal 10: %0.2f", (audiencia_canal_10/total_votos)/100);
	return 0;

}
