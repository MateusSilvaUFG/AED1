#include <stdio.h> //aula 16 

int main()
{
    int numero;
    
    do{
        printf("digite um numero de 1 a 5.\n");
    scanf("%i", &numero);
    } while(numero < 1 || numero > 5);
    
    
    switch(numero){
        case 1:
            printf("numero 1");
            break;
        case 2:
            printf("numero 2");
            break;
        case 3:
            printf("numero 3");
            break;
        case 4:
            printf("numero 4");
            break;
        case 5:
            printf("numero 5");
            break;
    }
    
    
    return 0;
}