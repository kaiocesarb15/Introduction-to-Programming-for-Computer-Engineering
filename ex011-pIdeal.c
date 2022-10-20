/*
By receiving as input the sex and height of a person, build a program to calculate your ideal weight using the following Instructions:
Ideal weight for men: (72.7*h) - 58, ideal weight for women: (62.1*h) - 44.7 (where h represents the height value in meters).
Recommended steps:
    a. Define the variables. Sex can be stored in a char or in a int, if you prefer.
    b. Read the sex (remember the prompt), if it is char type, the formatter is %c.
        i. It is important that this reading is done first.
    c. Read the height.
    d. Implement the offset with if-else by placing an assignment with different expression in the true and false part, according to
       the condition used and with the corresponding sex.
        i. For simplification, suppose the user will always inform only two options for sex, female or male.
       ii. Alternatively, you can also add two if independent, without the respective else, one for each sex.
    e. Display the calculated optimal weight.
*/

#include <stdio.h>

int main(void)
{
    char sexo;
    float altura, pideal;

    puts("Esse programa calcula o peso ideal para cada pessoa");
    printf("Por favor, informe seu sexo (m para masculino, f para feminino): ");
    scanf("%c", &sexo);
    printf("por favor, digite sua altura em m: ");
    scanf("%f", &altura);

    if (sexo=='m'){
        pideal=(72.7*altura)-58;
        printf("\nO seu peso ideal eh: %.1f kg\n", pideal);
    }else{
        pideal=(62.1*altura)-44.7;
        printf("\nO seu peso ideal eh: %.1f kg\n", pideal);
    }

    return 0;
}
