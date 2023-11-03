#include <stdio.h>

int fatorial(int numero){

    int resultado;

    
    if(numero == 0){
        resultado = 1;
    } else {
            resultado = numero * fatorial(numero-1);
    }
    return resultado;
}


int main(void){

    int numero, total;

    printf("digite um numero para fatorial.\n");

    scanf("%d", &numero);

    total = fatorial(numero);

    printf("total = %i", total);
}