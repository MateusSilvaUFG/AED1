#include <stdio.h> // aula 14

int main()
{
    int idade;
    
    printf("por favor informar idade\n");
    scanf("%i",&idade);
    
    if(idade < 18){
        printf("Menor de idade");
    }
    
        else{ printf("Maior de idade");
             }
    
    return 0;
}