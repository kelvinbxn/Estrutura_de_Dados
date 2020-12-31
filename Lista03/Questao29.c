#include <stdio.h>
#include <math.h>
/*Calcula o retorno de um investimento financeiro. O usu�rio deve informar quanto ser� investido por
m�s e qual ser� a taxa de juros mensal. O programa deve informar o saldo do investimento ap�s um ano
(soma das aplica��es mensais + juros compostos), e perguntar ao usu�rio se deseja calcular o ano
seguinte, sucessivamente. Por exemplo, caso o usu�rio deseje investir R$ 100,00 por m�s, e tenha uma
taxa de juros de 1% ao m�s, o programa forneceria a seguinte sa�da:
Saldo do investimento ap�s 1 ano: 268.25
Deseja processar mais um ano (S/N) ?
*/
int main(){
	float investido = 0, taxa_juros_mensal = 0, saldo = 0;
	int i = 1, continuar = 0;
	printf("Investimento por m�s: ");
	scanf("%f", &investido);
	printf("Taxa mesal: ");
	scanf("%f", &taxa_juros_mensal);
	for(i = 0; i <= 24;i++){
		if(i == 13){
			printf("%0.2f", saldo);
			printf("\nVoc� deseja continuar por mais 1 ano\n1 - Sim \n2 - N�o\n: ");
			scanf("%i", &continuar);
			if(continuar == 2){
				break;
			}
		}
		saldo = investido * pow(1 + taxa_juros_mensal/100,12);
	}
    return 0;
}


