#include <stdio.h>

int main ()
{   

    printf("int - Aceita todos\nChar - Somente unsigned e signed\nDouble - Somente long\nFloat - Não aceita modificadores");

    printf("Char.\n");
    char variavelChar = 'a';
    printf("%c\n", variavelChar);

    printf("Digite um letra char.\n");
    scanf("%c",&variavelChar);
    printf("%c\n", variavelChar);
    printf("\n");
    /* 
    bool variavelBool = true;
    printf("%i\n", variavelBool);   
    */ 

    printf("Bool.\n");
    printf("Use 0 para falso e 1 para verdadeiro\n");
    printf("\n");

    const float numero = 3.14;
    printf("variavel nao pode ser alterada cont = %f.\n", numero);
    printf("\n");

    printf("long int.\n");
    long int variavelInt = 10; //Long int - variavel com mais bytes
    printf("%li\n", variavelInt);
    printf("Digite um valor long int.\n");
    scanf("%li",&variavelInt);
    printf("%li\n", variavelInt);
    printf("\n");

    printf("Float.\n");
    float variavelFloat = 10.10;
    printf("%f\n", variavelFloat);
    printf("Digite um valor float.\n");
    scanf("%f",&variavelFloat);
    printf("%f\n", variavelFloat);
    printf("\n");

    printf("Double.\n");
    double variavelDouble = 10.10;
    printf("%f\n",variavelDouble);
    printf("Digite um valor double.\n");
    scanf("%lf", &variavelDouble);
    printf("%f\n",variavelDouble);

    return 0;
}