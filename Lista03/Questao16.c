#include <stdio.h>
/*Uma companhia financeira debita um juro de 0.85% di�rio sobre o saldo n�o pago de um empr�stimo.
Com um empr�stimo de R$ 3.000,00, um pagamento de R$ 200,00 � feito todo dia �til. Escreva um
programa que calcule quantos dias �teis s�o necess�rios para se concluir o pagamento do empr�stimo.
*/
int main(){
    float saldoNaoPago=3000;
    int dias=0;

    while(saldoNaoPago > 0){
        saldoNaoPago += (saldoNaoPago * 0.0085) - 200;
        dias += 1;
    }
    printf("Total de %i Dias\n", dias);
    return 0;
}
