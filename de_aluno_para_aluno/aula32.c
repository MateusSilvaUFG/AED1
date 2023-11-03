#include <stdio.h>

int variavelGlobal = 2;

void teste (void){
    int variavelLocal = 2;
    variavelLocal *= 2;
    
    static float pi = 3.14;
    pi *= 2;

    //variavel da função tem escopo local.

    printf("variavel local %i\n", variavelLocal);
    printf("variavel estatica %.2f\n", pi);
    printf("variavel global %i\n", variavelGlobal);
}


int main(void) {

    teste();
    teste();

    variavelGlobal += 2;
    printf("\n");
    printf("variavel Global %i\n", variavelGlobal);

    return 0;
}