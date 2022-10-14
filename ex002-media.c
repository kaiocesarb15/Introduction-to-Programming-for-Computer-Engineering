#include <stdio.h>
#include <stdlib.h>
/*
This program should calculate and return an arithmetic mean of three values
*/
int main(void)
{
    float nota1, nota2, nota3, media;

    puts("Esse programa calcula uma media simples, por favor, siga as instrucoes abaixo");
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nSua media eh: %.1f\n", media);

    return 0;
}
