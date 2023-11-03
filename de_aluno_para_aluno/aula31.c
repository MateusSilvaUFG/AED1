#include <stdio.h>

void teste (void){
    int variavelLocal = 2;
    variavelLocal *= 2;
    
    static float pi = 3.14;
    pi *= 2;

    //variavel da função tem escopo local.

    printf("variavel local %i\n", variavelLocal);
    printf("variavel estatica %.2f\n", pi);
}


int main(void) {

    teste();
    teste();

    return 0;
}