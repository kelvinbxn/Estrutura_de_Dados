#include <stdio.h>
/*Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo para decidir o
numero de notas de cada valor que deve ser disponibilizado para o cliente que realizou o saque. Um possível
critério seria o da "distribuição ótima" no sentido de que as notas de menor valor disponíveis fossem
distribuídas em número mínimo possível. Por exemplo, se a maquina só dispõe de notas de R$ 50, de R$ 20,
de R$ 10, de R$ 5 e de R$ 2, para uma quantia solicitada de R$ 87, o programa deveria indicar uma nota de
R$ 50, uma nota de R$20,00, uma nota de R$ 10, uma nota de R$ 5 e uma nota de R$ 2. Escreva um programa
que receba o valor da quantia solicitada e retorne a distribuição das notas de acordo com o critério da
distribuição ótima.
*/
int main(){
    int resto, valor, nota50, nota20, nota10, nota5, nota2;

    printf("Informe o valor que voce quer sacar: ");
    scanf("%i", &valor);
    nota50 = valor / 50;
    resto = valor % 50;
    nota20 = resto / 20;
    resto = resto % 20;
    nota10 = resto / 10;
    resto = resto % 10;
    nota5 = resto / 5;
    resto = resto % 5;
    nota2 = resto / 2;

    printf("%i Notas de 50\n%i Notas de 20\n%i Notas de 10\n%i Notas de 5\n%i Notas de 2\n",nota50,nota20,nota10,nota5,nota2);
    return 0;
}
