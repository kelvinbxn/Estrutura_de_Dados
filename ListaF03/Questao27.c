#include <stdio.h>
/*Leia um conjunto de dados de um grupo de 100 pessoas, sexo (1=Masculino, 2=Feminino), idade e
estado civil (1=Casado, 2=Solteiro, 3=Divorciado, 4=Viúvo) e escreva:
 Média de idade das mulheres;
 Média de idade dos homens;
 O percentual de homens solteiros;
 O percentual de mulheres solteiras;
 A quantidade de mulheres divorciadas acima de 30 anos.
*/

int main(){

	int sexo = 0, idade = 0, estado_civil = 0, i;
	float total_homens = 0, total_mulheres = 0,
				total_idade_mulheres = 0, total_idade_homens = 0,
				total_mulheres_solteiras = 0, total_homens_solteiros = 0,
				total_mulheres_divorciadas = 0;


	for(i = 0; i < 3; i++){
		printf("1 - Masculino \n2 - Feminino\n\n");
		printf("Qual o seu sexo: ");
		scanf("%d", &sexo);

		if(sexo != 1 && sexo != 2){
			system("pause");
		}
		printf("Qual a sua idade: ");
		scanf("%d", &idade);
		printf("\n1 - Casado \n2 - Solteiro \n3 - Divorciado \n4 - Viuvo\n");
		printf("Qual o seu estado civil: ");
		scanf("%d", &estado_civil);
		if(estado_civil != 1 && estado_civil != 2 && estado_civil != 3 && estado_civil != 4){
            printf("Opcao invalida")
		}
		if(sexo == 1){
			total_homens += 1;
			total_idade_homens += idade;
			if(estado_civil == 2){
				total_homens_solteiros += 1;
			}
		}
		else{
			total_mulheres += 1;
			total_idade_mulheres += idade;
			if(estado_civil == 2){
				total_mulheres_solteiras += 1;
			}
			if(idade > 30){
				if(estado_civil == 3){
					total_mulheres_divorciadas += 1;
				}
			}
		}

		printf("\n");
	}

	printf("\Média idade mulheres: %0.2f",(total_idade_mulheres/total_mulheres));
	printf("\nMédia idade homens: %0.2f", (total_idade_homens/total_homens));
	printf("\nPercentual homens solteiros: %0.4f",(total_homens_solteiros/total_homens)/100);
	printf("\nPercentual mulheres solteiras: %0.4f",(total_mulheres_solteiras/total_mulheres)/100);
	printf("\nQuantidade mulheres divorcias acima dos 30 anos: %0.0f", total_mulheres_divorciadas);
	return 0;
}


