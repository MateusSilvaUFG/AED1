#include <stdio.h>

void teste (void){
    int variavelLocal = 2;
    variavelLocal *= 2;
    
    //variavel da função tem escopo local.

    printf("%i\n", variavelLocal);
}


int main(void) {

    teste();
    teste();

    return 0;
}