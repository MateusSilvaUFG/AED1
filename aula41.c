#include <stdio.h>

// casting da linguagem c 

int main (void){

    int x = 16;
    int y = 3;

    float resultado;

    resultado = (float)x / y;

    printf("%.2f", resultado);
    /* da a resposta em INT  não em FLOAT */

return 0;
}