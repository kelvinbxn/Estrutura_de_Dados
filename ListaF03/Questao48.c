#include <stdio.h>
/*Uma determinada empresa armazena para cada funcion�rio uma ficha contendo o c�digo, o n�mero de
horas trabalhadas e o seu no de dependentes. Considerando que a empresa paga R$ 12,00 por hora e R$
40,00 por dependentes e que sobre o sal�rio s�o feitos descontos de 8,5% para o INSS e 5% para IR.
Escreva um programa que leia o c�digo, n�mero de horas trabalhadas e n�mero de dependentes de N
funcion�rios. Ap�s a leitura de cada ficha, escreva os valores descontados para cada imposto e o sal�rio
l�quido do funcion�rio.
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
