#include <stdio.h>
/*Leia dois valores e uma das seguintes opera��es a serem executadas (codificadas da seguinte forma: 1 � Adi��o, 2
� Subtra��o, 3 � Multiplica��o e 4 � Divis�o). Calcule e escreva o resultado dessa opera��o sobre os dois valores
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
