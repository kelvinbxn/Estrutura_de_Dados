#include <stdio.h>
#include <math.h>
/*Leia os coeficientes (A, B e C) de uma equações de 2° grau e escreva suas raízes. Vale lembrar que o coeficiente
A deve ser diferente de 0 (zero).
*/
int main(){
    int a, b, c, delta;
    float raiz, x1, x2;

    printf("Digite o valor de A:");
    scanf("%i", &a);
    printf("Digite o valor de B:");
    scanf("%i", &b);
    printf("Digite o valor de C:");
    scanf("%i", &c);

    if(a > 0){
        delta = (pow(b,2)) - 4 * (a * c);
        printf("O delta eh: %0.2i\n", delta);
        delta = delta * -1;
        raiz = sqrt(delta);
        printf("A Raiz eh: %0.2f\n", raiz);
        x1 = (-b + raiz) / (2 * a);
        x2 = (-b - raiz) / (2 * a);
        printf("X1 = %0.2f\nX2 = %0.2f", x1, x2);
    }
    else if(a <= 0){
        printf("'A' nao pode ser 0 !!\n");
    }
    return 0;
}
