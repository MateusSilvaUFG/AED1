#include <stdio.h>

int main ()
{
    int numero, aux;

    printf("Digite um numero.\n");
    scanf("%i", &numero);

    if (numero >= 0){
        do {
            aux = numero % 10;
            printf("%i", aux);
            numero /= 10;
        } while ( numero != 0);
        printf ("\n");
    }

    else if (numero >= 0){
        numero = numero * -1;

        printf("-");
        
        do {
            aux = numero % 10;
            printf("%i", aux);
            numero /= 10;
        } while ( numero != 0);
        printf ("\n");
    }
}