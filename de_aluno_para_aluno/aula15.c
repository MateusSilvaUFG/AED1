#include <stdio.h> // aula 15

int main()
{
    int idade;
    
    printf("informar idade.\n");
    scanf("%i", &idade);
    
    if( idade <= 5){
        printf("Bebê.\n");
    }
    else if(idade > 5 && idade <= 10){
        printf("Criança.\n");
    }
    else if(idade > 10 && idade <= 18){
        printf("Adolescente");
    }
    else if(idade > 18){
        printf("Adulto");
    }
    
    return 0;
}