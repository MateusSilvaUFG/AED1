#include <stdio.h>

// desafio aula 12

int main()
{
    int fatorial;
    int resultado = 1;
    
    scanf("%i", &fatorial);
    
    for( ; fatorial >= 1; fatorial--){
        
        resultado = fatorial * resultado;
    }
    
    printf("o fatorial é = %i.\n", resultado);
    
    return 0;
}