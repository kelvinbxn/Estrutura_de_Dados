#include <stdio.h>
/*Uma loja vende seus produtos no sistema entrada mais duas presta��es, sendo a entrada maior ou igual a cada
uma das duas presta��es; estas devem ser iguais, inteiras e as maiores poss�veis. Por exemplo, se o valor da
mercadoria for R$ 270,00, a entrada e as duas presta��es s�o iguais a R$ 90,00; se o valor da mercadoria for
R$ 302,00, a entrada � de R$ 102,00 e as duas presta��es s�o iguais a R$ 100,00. Escreva um programa que
receba o valor da mercadoria e escreva o valor da entrada e das duas presta��es, conforme as regras acima.
*/
int main(){
    int produto, entrada, parcela;

    printf("digite o valor do produto: ");
    scanf("%i", &produto);
    entrada = (produto / 3) + (produto % 3);
    parcela = produto / 3;

    printf("a entrada vai ser de %i R$ e Duas parcelas de %i R$", entrada, parcela);
    return 0;
}
