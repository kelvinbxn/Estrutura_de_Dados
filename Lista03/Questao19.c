#include <stdio.h>
/*Em um frigor�fico, cada boi traz em seu pesco�o um cart�o contendo o seu n.� de identifica��o e seu
peso. Escreva um programa que leia um conjunto de cart�es e escreva o n.� de identifica��o e o peso do
boi mais magro e do boi mais gordo. (Flag: n.� identifica��o=0)
*/
int main(){
    int cartao, cartaoMaisPesado=0, cartaoMaisLeve=0;
    float peso, maisPesado=0, maisLeve=99999;

    printf("Digite a identificacao do boi: ");
    scanf("%i", &cartao);

    while(cartao != 0){
        printf("Digite o Peso do boi: ");
        scanf("%f", &peso);

        if(peso > maisPesado){
            maisPesado = peso;
            cartaoMaisPesado = cartao;
        }
        else if(peso < maisLeve){
            maisLeve = peso;
            cartaoMaisLeve = cartao;
        }
        printf("Digite a identificacao do boi: ");
        scanf("%i", &cartao);
    }
    printf("\nIdentificacao do boi mais pesado: %i\n", cartaoMaisPesado);
    printf("Peso do boi mais pesado: %0.2f\n\n", maisPesado);
    printf("Identificacao do boi mais leve: %i\n", cartaoMaisLeve);
    printf("Peso do boi mais leve: %0.2f\n\n", maisLeve);
    return 0;
}
