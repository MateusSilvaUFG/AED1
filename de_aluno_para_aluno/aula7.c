#include <stdio.h>

int main ()
{
    int base;
    int altura;
    int area;

    printf("Digite o valor da base.\n");
    scanf("%i",&base);  //scanf("tipo de variavel", &nomeVariavel);
    
    printf("Digite o valor da altura.\n");
    scanf("%i",&altura);

    area = base * altura;

    printf("A area = %i", area);
   
    return 0;
}