#include <stdio.h>
/*Leia 2 n�meros inteiros e escreva o quociente e o resto da divis�o dos mesmos, sem que os operadores
de divis�o (/ e %) sejam utilizados.
*/
int main(){
    int num1 = 0, num2 = 0, i, resultado = 0;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    for(i=0;i < num1;i++){
        if(num1 >= num2 * i){
        resultado = i;
        }
	 }
    printf("Divis�o: %d", resultado);
    return 0;
}
