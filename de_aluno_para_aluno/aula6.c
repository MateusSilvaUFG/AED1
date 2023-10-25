#include <stdio.h>

int main () {

    int x,y,z,b;

    x = y = z = b = 10;

    int adicao;
    int subtracao;
    int divisao;
    int multiplicacao;

    adicao = x + y + z + b;

    subtracao = adicao - b;

    multiplicacao = x * 10;

    divisao = 10 / 10;

    printf("adicao = %i.\nsubtracao = %i.\nmultiplicacao = %i.\ndivisao = %i.\n",
            adicao, subtracao, multiplicacao, divisao);

    return 0;
}