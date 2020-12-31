#include <stdio.h>
/*Leia dois valores e uma das seguintes operações a serem executadas (codificadas da seguinte forma: 1 – Adição, 2
– Subtração, 3 – Multiplicação e 4 – Divisão). Calcule e escreva o resultado dessa operação sobre os dois valores
lidos
*/
int main(){
    float valor1, valor2, resultado;
    int escolha;

    printf("Digite o 1 valor: ");
    scanf("%f", &valor1);
    printf("Digite o 2 valor: ");
    scanf("%f", &valor2);
    printf("====== Escolha Uma Opcao ======\n");
    printf("1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    printf("Escolha >>>> ");
    scanf("%i", &escolha);

    switch(escolha){

        case 1:
            resultado = valor1 + valor2;
            printf("%0.2f", resultado);
            break;

        case 2:
            resultado = valor1 - valor2;
            printf("%0.2f", resultado);
            break;

        case 3:
            resultado = valor1 * valor2;
            printf("%0.2f", resultado);
            break;

        case 4:
            resultado = valor1 / valor2;
            printf("%0.2f", resultado);
            break;

        default:
            break;

    }
    return 0;
}
