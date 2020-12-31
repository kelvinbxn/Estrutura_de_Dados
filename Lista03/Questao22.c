#include <stdio.h>
/*Leia 2 números inteiros e escreva o quociente e o resto da divisão dos mesmos, sem que os operadores
de divisão (/ e %) sejam utilizados.
*/
int main(){
    int num1 = 0, num2 = 0, i, resultado = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    for(i=0;i < num1;i++){
        if(num1 >= num2 * i){
        resultado = i;
        }
	 }
    printf("Divisão: %d", resultado);
    return 0;
}
