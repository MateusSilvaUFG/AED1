#include <stdio.h>

int main ()
{
    char variavelChar = 'a';
    printf("%c\n", variavelChar);

    scanf("%c",&variavelChar);
    printf("%c\n", variavelChar);

    /* 
    bool variavelBool = true;
    printf("%i\n", variavelBool);   
    */ 

    int variavelBool = 1;  // Use 0 para falso e 1 para verdadeiro
    printf("%d\n", variavelBool);

    const int numero = 3.14;
    printf("variavel nao pode ser alterada.\n");

    long int variavelInt = 10; //Long int - variavel com mais bytes
    printf("%li\n", variavelInt);

    scanf("%li",&variavelInt);
    printf("%li\n", variavelInt);

    float variavelFloat = 10.10;
    printf("%f\n", variavelFloat);

    scanf("%f",&variavelFloat);
    printf("%f\n", variavelFloat);
    

    return 0;
}