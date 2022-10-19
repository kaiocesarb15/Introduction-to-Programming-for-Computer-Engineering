#include <stdio.h>

int main(void)
{
    int A, B;

    puts("Esse programa diz qual eh o menor valor que voce digitou, por favor, siga as instrucoes abaixo");
    printf("Digite um numero inteiro para a variavel A: ");
    scanf("%d", &A);
    printf("Digite um numero inteiro para a variavel B: ");
    scanf("%d", &B);

    if (A==B){
        printf("\nA, B sao iguais e possuem o valor: %d\n", A);
    }else if (A>B){
        printf("\nA eh o maior numero e possui o valor: %d\n", A);
        }else if (B>A){
            printf("\nB eh o maior numero e possui o valor: %d\n", B);
            }

    return 0;
}

