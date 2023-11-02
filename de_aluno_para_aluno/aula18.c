#include <stdio.h>

int main() 
{
    int numero,resto, numero1, numero2;

    printf("Digite um numero para ser invertido.\n");
    scanf("%i", &numero);
   
    numero1 = numero / 100; //1
    resto = numero % 100; //23

    numero2 = resto / 10; //2  
    numero  = resto % 10; //3
   
    numero = (numero *100) + (numero2 * 10) + numero1;
    
    printf("%i.\n", numero);

    return 0;
}