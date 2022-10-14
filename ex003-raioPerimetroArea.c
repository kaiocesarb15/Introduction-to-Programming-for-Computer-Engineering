#include <stdio.h>
#include <stdlib.h>
/*
This program should calculate the radius, area and perimeter of any circle from its diameter.
*/

int main(void)
{
    float diametro, raio, perimetro, area;

    puts("Este programa calcula o perimetro, o raio e a area de qualquer circulo, apenas, atraves de seu diametro");
    printf("Por favor, digite o diametro desejado em cm: ");
    scanf("%f", &diametro);

    raio = diametro / 2;
    perimetro = 2 * 3.14 * raio;
    area = 3.14 * (raio * raio);

    printf("\nSeu raio eh %.1fcm\n", raio);
    printf("Seu perimetro eh %.1fcm\n", perimetro);
    printf("Sua area eh %.1fcm*cm\n", area);

    return 0;
}
