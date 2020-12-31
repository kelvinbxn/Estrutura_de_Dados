#include <stdio.h>
#include <string.h>
/*Leia o nome de um produto, o preço e a quantidade comprada. Escreva o nome do produto comprado e
o valor total a ser pago, considerando que são oferecidos descontos pelo número de unidades
compradas, segundo a tabela abaixo: (FLAG: nome do produto = “FIM”).
a. Até 10 unidades: valor total
b. de 11 a 20 unidades: 10% de desconto
c. de 21 a 50 unidades: 20% de desconto
d. acima de 50 unidades: 25% de desconto
*/
int main(){
	char produto[100];
	float preco, valor, preco_total;
	int quantidade_produto;
	 while(1){
		printf("Nome do produto: ");
		scanf("%s", produto);
		if(strcmp(produto, "FIM") == 0){
			break;
		}
		printf("Preco do produto: ");
		scanf("%f",&preco);
		printf("Qual a quantidade do produto comprado: ");
		scanf("%i", &quantidade_produto);
        preco_total = preco * quantidade_produto;
	  if(quantidade_produto <= 10){
			valor = preco_total;
		}
		else if(11 < quantidade_produto && quantidade_produto <= 20){
			valor = preco_total - (preco_total * 10) / 100;
		}
		else if(21 < quantidade_produto && quantidade_produto <= 50){
			valor = preco_total - (preco_total * 20) / 100;
		}
		else {
			valor = preco_total - (preco_total * 50) / 100;
		}
	 	printf("\nNome -> %s", produto);
	 	printf("\nPreco Total -> %0.2f\n\n", valor);
	 }
	return 0;
}


