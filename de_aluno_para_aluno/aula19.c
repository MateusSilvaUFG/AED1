#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 20;
    
    int resposta;

    num1 < num2 ? printf("verdade.\n"): printf("falso.\n");

    num1 < num2 ? (resposta = 10) : (resposta = -10);


    printf("%i.\n", resposta);

    return 0;
}