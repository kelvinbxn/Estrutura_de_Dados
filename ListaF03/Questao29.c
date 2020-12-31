#include <stdio.h>
#include <math.h>
/*Calcula o retorno de um investimento financeiro. O usuário deve informar quanto será investido por
mês e qual será a taxa de juros mensal. O programa deve informar o saldo do investimento após um ano
(soma das aplicações mensais + juros compostos), e perguntar ao usuário se deseja calcular o ano
seguinte, sucessivamente. Por exemplo, caso o usuário deseje investir R$ 100,00 por mês, e tenha uma
taxa de juros de 1% ao mês, o programa forneceria a seguinte saída:
Saldo do investimento após 1 ano: 268.25
Deseja processar mais um ano (S/N) ?
*/
int main(){
	float investido = 0, taxa_juros_mensal = 0, saldo = 0;
	int i = 1, continuar = 0;
	printf("Investimento por mês: ");
	scanf("%f", &investido);
	printf("Taxa mesal: ");
	scanf("%f", &taxa_juros_mensal);
	for(i = 0; i <= 24;i++){
		if(i == 13){
			printf("%0.2f", saldo);
			printf("\nVocê deseja continuar por mais 1 ano\n1 - Sim \n2 - Não\n: ");
			scanf("%i", &continuar);
			if(continuar == 2){
				break;
			}
		}
		saldo = investido * pow(1 + taxa_juros_mensal/100,12);
	}
    return 0;
}


