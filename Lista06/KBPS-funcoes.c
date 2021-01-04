#include <stdio.h>
#include <math.h>

void Ano_bi(int ano){
    if(ano%4==0 && ano%100!=0){
        printf("Ano Bissexto!");
    }
    else if(ano%400==0){
        printf("Ano Bissexto!");
    }
    else{
        printf("Não é Bissexto!");
    }
}

int Soma_recursiva(int numero, int soma,int contador){
    if(contador < numero){
        soma = soma + contador;
        contador++;
        return(numero,soma,contador);
    }
    else{
        printf("Soma: %i", soma);
    }
}

int fat_recursivo(int numero){
    if((n==1) || (n==0)){
        return 1;
    }
    else{
        return fat_recursivo(n-1) * n;
    }

int Fibo_recursiva(int n,int t1,int t2){
    int t3;
    if(n > 2){
        t3 = t1 + t2;
        printf(" %i", t3);
        t1 = t2;
        t2 = t3;
        n -= 1;
        return Fibo_recursiva(int n,int t1,int t2);
    }
}

int Mdc_recursivo(int numero1,int numero2){
    float resto;
    if(numero !=0){
        resto = numero1 % numero2;;
        numero1 = numero2;
        numero2 = resto;
        return Mdc_recursivo(numero1, numero2);
    }
    else{
    printf("MDC = %i\n", numero1);
    }
}

void Mdc(int numero1,int numero2){
    float resto;
    while(numero2 != 0){
        resto = numero1 % numero2;;
        numero1 = numero2;
        numero2 = resto;
    }
    printf("MDC = %i\n", numero1);
}

void Mmc(int numero1, numero2){
    int maior, i;
    if(numero1 > numero2){
        maior = numero1;
    }
    else if(numero2 > numero1){
        maior = numero2;
    }
    for(i = 1; i > 0; i += 1){
        if(maior % numero1 == 0 && maior % numero2 == 0){
            printf("%i\n",maior);
            i = -1;
        }
        else{
            maior += 1;
        }
    }
}

void Data_valida(int dia, int mes, int ano){
    if(mes <= 0 || mes >= 13 || dia <= 0 || dia >= 32){
        printf("Data Invalida!!!!");
    }
    else{
        if(mes == 2 && dia <= 29){
            printf("Data Valida");
        }
        else if(mes == 1 || mes == 3 || mes == 5|| mes == 7 || mes == 8 || mes == 10 || mes == 12){
            if(dia <= 31){
                printf("Data Valida");
            }
            else{
                printf("Data Invalida");
            }
        }
        else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if(dia <= 30){
                printf("Data Valida");
            }
            else{
                printf("Data invalida");
            }
        }
    }
}

void Eh_primo(int numero){
    int contador=0;
    for(int i=0;i<=numero/2;i++){
        if(numero % i == 0){
            contador++;
        }
    }
    if(contador == 0){
        printf("Eh primo!");
    }
    else{
        printf("Não eh primo!");
    }
}

void Fatorail(int numero){
    int soma=1,contador;
    for(contador = 1; contador <= numero; contador += 1){
        soma = soma * contador;
    }
    printf("%i", soma);
}

void Temperatura_f_c(int fah){
    float celcius;
    celcius = (5 * fah - 160) / 9;
    printf("A temperatura %0.2f F equivale a: %0.2f C", fah, celcius);
}


void Temperatura_c_f(float celcius){
    float fah;
    fah = (8 * celcius + 160) / 5;
    printf("A temperatura %0.2f C equivale a: %0.2f F", celcius, fah);
}

void Volume_esfera(int raio){
    float volume, pi=3.14;
    volume = (4 * pi * pow(raio,3)) / 3;
    printf("O volume da esfera eh: %0.2f", volume);
}

void Comprimento_esfera(int raio){
    float comprimento;
    comprimento = 2 * 3.14 * raio;
    printf("O comprimento eh de: %0.2f", comprimento);
}

void Area_retangulo(int base,int altura){
    float area;
    area = base * altura;
    printf("A area do retangulo eh: %0.2f", area);
}

void Area_quadrado(float lado){
    float area;
    area = lado * lado;
    printf("A area do teclado eh: %0.2f\n", area);
}

void Area_triangulo(int base, int altura){
    float area;
    area = (base * altura) / 2;
    printf("A area do triangulo eh: %.02f", area);
}

void Dolar_para_real(float real, float dolar){
    float convertido;
    convertido = dolar * real;
    printf("%0.2f Dolares equivale a: %0.2f Reais\n", dolar, convertido);
}

void VelocidadeKm_para_MS(float velocidadeKm){
    float velocidadeMs;
    velocidadeMs = velocidadeKm / 3.6;
    printf("A velocidade %0.2fKm/h equivale a %0.2fM/s\n", velocidadeKm, velocidadeMs);
}

void VelocidadeM_para_Km(int velocidadeMs){
    scanf("%f", &velocidadeMs);
    int velocidadeKm = velocidadeMs * 3.6;
    printf("Isso equivale a %0.1f Km/h\n", velocidadeKm);
}

