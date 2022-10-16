/*
Write a program to read an integer value corresponding to an amount in money,
calculate and display how many banknotes of 100, 50, 20, 10, 5, 2 and 1 real
(in memory) are required to compose this value.
*/
#include <stdio.h>

int main(void)
{
    int ncedulas;
    int valor;

    printf("Esse programa calcula a quantidade de cedulas de cada tipo para compor qualquer valor\n");
    printf("Por favor, digite o valor desejado: ");
    scanf("%d", &valor);

    ncedulas = valor / 200;
    valor = valor%200;
    printf("%d cedulas de 200\n", ncedulas);

    ncedulas = valor / 100;
    valor = valor%100;
    printf("%d cedulas de 100\n", ncedulas);

    ncedulas = valor / 50;
    valor = valor%50;
    printf("%d cedulas de 50\n", ncedulas);

    ncedulas = valor / 20;
    valor = valor%20;
    printf("%d cedulas de 20\n", ncedulas);

    ncedulas = valor / 10;
    valor = valor%10;
    printf("%d cedulas de 10\n", ncedulas);

    ncedulas = valor / 5;
    valor = valor%5;
    printf("%d cedulas de 5\n", ncedulas);

    ncedulas = valor / 2;
    valor = valor%2;
    printf("%d cedulas de 2\n", ncedulas);

    ncedulas = valor;
    printf("%d cedulas de 1\n", ncedulas);

    return 0;
}
