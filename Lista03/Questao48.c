#include <stdio.h>
/*Uma determinada empresa armazena para cada funcionário uma ficha contendo o código, o número de
horas trabalhadas e o seu no de dependentes. Considerando que a empresa paga R$ 12,00 por hora e R$
40,00 por dependentes e que sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IR.
Escreva um programa que leia o código, número de horas trabalhadas e número de dependentes de N
funcionários. Após a leitura de cada ficha, escreva os valores descontados para cada imposto e o salário
líquido do funcionário.
*/
int main(){
    int id, numDependentes;
    printf("Codigo: ");
    scanf("%i", &id);
    double numHora, totalSalario, inss, ir, salarioLiq;
    while(id != 0){
        printf("Horas Trabalhadas: ");
        scanf("%lf", &numHora);
        printf("Dependentes: ");
        scanf("%i", &numDependentes);
        totalSalario  = (numHora * 12) + (numDependentes * 40);
        inss = totalSalario * 0.085;
        ir  = totalSalario * 0.05;
        printf("Desconto INSS: %0.2lf\n", inss);
        printf("Desconto IR: %0.2lf\n", ir);
        salarioLiq = (totalSalario - inss) - ir;
        printf("Salario liquido: %0.2lf\n", salarioLiq);
        printf("codigo: ");
        scanf("%i", &id);
    }
    return 0;
}
