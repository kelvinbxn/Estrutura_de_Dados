#include <stdio.h>
/*Leia o sal�rio de funcion�rios de uma empresa, calcule e escreva o novo sal�rio (segundo os crit�rios
descritos abaixo), a soma dos sal�rios atuais, a soma dos sal�rios reajustados e a diferen�a entre as 2
somas. (Flag: sal�rio=0)
*/
int main(){
    float salario, novoSalario, somaAtual=0, somaReajuste=0;

    printf("Digite o valor do Salario: ");
    scanf("%f", &salario);

    while(salario != 0){
        somaAtual += salario;
        if(salario >= 1 && salario <= 2999.99){
            novoSalario = salario * 1.25;
            somaReajuste += novoSalario;
        }
        else if(salario >= 3000 && salario <= 5999.99){
            novoSalario = salario * 1.20;
            somaReajuste += novoSalario;
        }
        else if(salario >= 6000 && salario <= 9999.99){
            novoSalario = salario * 1.15;
            somaReajuste += novoSalario;
        }
        else if(salario >= 10000){
            novoSalario = salario * 1.10;
            somaReajuste += novoSalario;
        }
        printf("Digite o valor do Salario: ");
        scanf("%f", &salario);
    }
    printf("Soma salario atual: %0.2f\n", somaAtual);
    printf("Soma salario com reajuste: %0.2f\n", somaReajuste);
    return 0;
}
