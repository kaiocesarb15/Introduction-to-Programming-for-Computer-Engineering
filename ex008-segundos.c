/*
Write a program to read a value representing a time in seconds,
calculate and display this same time in: hour, minute and second.
*/
#include <stdio.h>

int main(void)
{
    int valor, tempo;

    printf("Esse programa transforma segundos em horas, minutos e segundos\n");
    printf("Digite os segundos: ");
    scanf("%d", &valor);

    tempo = valor / 3600;
    valor = valor % 3600;
    printf("\n%d hora(s) ", tempo);

    tempo = valor / 60;
    valor = valor % 60;
    printf("%d minuto(s) ", tempo);

    tempo = valor;
    printf("%d segundo(s) \n", tempo);

    return 0;
}
