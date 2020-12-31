#include <stdio.h>
/*Uma companhia financeira debita um juro de 0.85% diário sobre o saldo não pago de um empréstimo.
Com um empréstimo de R$ 3.000,00, um pagamento de R$ 200,00 é feito todo dia útil. Escreva um
programa que calcule quantos dias úteis são necessários para se concluir o pagamento do empréstimo.
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
