#include <stdio.h>
/*Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e a sua opinião
em relação ao filme (1=ótimo, 2=bom, 3=regular, 4=péssimo). Escreva um programa que leia a idade e
a opinião das pessoas, calcule e mostre ao final: (FLAG: idade = -1).
 a média das idades das pessoas que responderam ótimo;
 a quantidade de pessoas que respondeu
*/

int main (){
	int idade = 0, opiniao_filme = 0, total_idade = 0, total_votos = 0;
	float total_votos_bons = 0;

	while(idade >= 0){
		printf("Idade: ");
		scanf("%i",&idade);
		if(idade < 0){
			break;
		}
		printf("\n1 - otimo \n2 - bom \n3 - regular \n4 - pessimo\n");
		printf("Qual a sua opinião sobre o filme: ");
		scanf("%i",&opiniao_filme);
		if(opiniao_filme == 2){
			total_votos_bons += 1;
		}
		if(opiniao_filme != 1 && opiniao_filme != 2 && opiniao_filme != 3 && opiniao_filme != 4 && opiniao_filme != 5 ){
			printf("Valor Invalido");
		}
		total_idade += idade;
		total_votos += 1;
		printf("\n");
	}
	printf("\nMedia da idade: %i ", (total_idade/total_votos));
	printf("\nA quantidade de pessoas que respondeu ao questionário: %i", (total_votos));
	printf("\nA porcentagem de pessoas que respondeu bom: %0.2f", (total_votos_bons/total_votos)/100);
    return 0;
}
