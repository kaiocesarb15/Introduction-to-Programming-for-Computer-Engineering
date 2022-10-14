#include <stdio.h>
#include <stdlib.h>

int main(void){
    int base, altura;
    float area;

    printf("Esse programa calcula a area de um triangulo qualquer, por favor, siga as instrucoes abaixo\n");
    printf("Digite a base em cm: ");
    scanf("%d", &base);
    printf("Digite a altura em cm: ");
    scanf("%d", &altura);

    area = (base * altura) / 2.0;

    printf("\nA area do triangulo eh: %.1f cm*cm\n", area);

    return 0;
}
