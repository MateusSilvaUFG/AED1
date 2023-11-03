#include <stdio.h>

int inverte(int numero) {
    numero *= -1;
    return numero;
}

int soma(int numero1, int numero2) {

    int total;

    if (numero1 < 0) {
        numero1 = inverte(numero1);
    } else if (numero2 < 0) {
        numero2 = inverte(numero2);
    }

    total = numero1 + numero2;
    
    return total;
}

int main(void) {
    int numero1, numero2, total;

    scanf("%i %i", &numero1, &numero2);

    total = soma(numero1, numero2);

    printf("total = %i.\n", total);

    return 0;
}
