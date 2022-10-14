#include <stdio.h>
#include <stdlib.h>
/*
This program should calculate any person's BMI by weight and height of the
*/
int main(void)
{
    float peso, altura, imc;

    puts("Esse programa calcula o imc de qualquer pessoa, por favor, siga as instrucoes abaixo");
    printf("digite seu peso em kg:");
    scanf("%f", &peso);
    printf("digite sua altura em m:");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("seu imc eh:%.1f", imc);

    return 0;
}

