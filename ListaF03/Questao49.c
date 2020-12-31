#include <stdio.h>
/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e
número de filhos. Escreva um programa que leia o salário e o número de filhos de N habitantes e
escreva:
 média de salário da população;
 média de número de filhos;
 percentual de pessoas com salário de até R$ 1.000,00.
*/
int main(){
    int numHabitantes, totalFilhos, pessoas, contador, filhos;
    float totalSalario=0, salario, mediaSalario, mediaFilhos, porcentSal;
    contador = numHabitantes;
    printf("Numero de habitantes: ");
    scanf("%i", numHabitantes);
    while(contador > 0){
        printf("Salario: ");
        scanf("%f", &salario);
        totalSalario = totalSalario + salario;
        printf("Total de filhos: ");
        scanf("%i", &filhos);
        totalFilhos += filhos;
        if(salario <= 1000){
            pessoas += 1;
        }
        contador -= 1;
    }
    mediaSalario = totalSalario / numHabitantes;
    mediaFilhos = totalFilhos / numHabitantes;
    porcentSal = (pessoas / numHabitantes) * 100;
    printf("Media de dalario da populacao: %0.2f\n", mediaSalario);
    printf("Media de numero de filhos: %0.2f", mediaFilhos);
    printf("Percentual de pessoas com salario de ate 1 mil reais: %0.2f", porcentSal);
    return 0;
}
