#include <stdio.h>

int tamanhoString(char String[]);

int main(){

    char stringUsuario[20];

    printf("Digite uma palavra (String):\n");
    scanf("%s", stringUsuario);

    int contador = tamanhoString(stringUsuario);

    printf("%i\n", contador);

    return 0;
}

int tamanhoString(char string[]){
    int contador = 1;

    for(int i = 0; i < 20; i++){
        if(string[i] != '\0'){ contador++; }
        else break;
    }

    return contador;
}