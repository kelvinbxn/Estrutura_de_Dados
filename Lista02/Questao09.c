#include <stdio.h>
/*Leia a altura (em metros) e peso (em Kg) de uma pessoa, em seguida calcule o �ndice de massa corp�rea (IMC =
peso / altura2
). Ao final, escreva se a pessoa est� com peso normal (IMC abaixo de 25), obeso (IMC entre 25 e 30)
ou obesidade m�rbida (IMC acima de 30)
*/
int main(){
    float altura, peso, imc;

    printf("Digite o valor da altura em M: ");
    scanf("%f", &altura);
    printf("Digite o valor do pego em Kg: ");
    scanf("%f", &peso);
    imc = peso / (altura * altura);

    if(imc < 25){
        printf("O peso est� normal!!!!\n");
    }
    else if(imc >= 25 && imc <= 30){
        printf("Obeso !!!!\n");
    }
    else if(imc > 30){
        printf("Obesidade morbida !!!!\n");
    }
    return 0;
}
