#include <stdio.h>
/*Calcule a quantidade de dinheiro gasta por um fumante. Dados de entrada: o número de anos que ele fuma, o
no de cigarros fumados por dia e o preço de uma carteira (1 carteira tem 20 cigarros).
*/
int main(){

    int anos, cigarroDia, carteira=20, totalCigarro;
    float preco, totalCarteira, valorTotal;

    printf("Digite a quantidade de anos fumando: ");
    scanf("%i", &anos);
    printf("Digite a quantidade de cigarros fumados por dia: ");
    scanf("%i", &cigarroDia);
    printf("Digite o preco de uma carteira de cigarro: ");
    scanf("%f", &preco);
    totalCigarro = (anos *365) * cigarroDia;
    totalCarteira = ceil(totalCigarro / carteira);
    valorTotal = totalCarteira * preco;

    printf("O valor toral gasto eh de: %.02f R$", valorTotal);
    return 0;
}
