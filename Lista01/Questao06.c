#include <stdio.h>
/*Leia o sal�rio de um trabalhador e
escreva seu novo sal�rio com um aumento de 25%.
*/
int main(){
    float salarioAtual, salarioNovo;

    printf("Escreva o valor do Salario atual: ");
    scanf("%f", &salarioAtual);
    salarioNovo = salarioAtual * 1.25;

    printf("O valor do novo Salario comaumento e de: %0.2fR$\n", salarioNovo);
    return 0;
}
