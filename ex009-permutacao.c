/*
Write a C program that reads the value of two variables from the keyboard and makes the exchange their values.
*/
#include <stdio.h>

int main(void){
    int a, b, c;

    puts("Esse programa inverte o valor das duas variaveis, por favor, siga as instrucoes abaixo");
    printf("Digite um valor inteiro para a variavel (a): ");
    scanf("%d", &a);
    printf("Digite um valor inteiro para a variavel (b): ");
    scanf("%d", &b);

    printf("\nOs valores lidos para a e b foram: %d e %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("\nOs novos valores de a e b sao: %d e %d\n", a, b);

    return 0;
}
