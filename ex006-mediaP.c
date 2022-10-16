/*
Write a C program that, given four bimonthly averages, calculates the
annual weighted average, knowing that the 1st bimester has a weight of 1, the 2nd bimester has
weight 2, the 3rd has weight 3 and the 4th has weight 4.
*/
#include <stdio.h>

int main(void)
{
    float media1, media2, media3, media4;
    float mediaa;

    printf("Esse programa calcula a media anual, atraves de uma media ponderada, por favor, siga as instrucoes abaixo\n");
    printf("Digite a primeira media: ");
    scanf("%f", &media1);
    printf("Digite a segunda media: ");
    scanf("%f", &media2);
    printf("Digite a terceira media: ");
    scanf("%f", &media3);
    printf("Digite a quarta media: ");
    scanf("%f", &media4);

    mediaa = (media1 * 1 + media2 * 2 + media3 * 3 + media4 * 4) / 10;

    printf("\nA media anual eh %.1f\n", mediaa);

    return 0;
}
