#include <stdio.H>
void concatenarStrings(char string1[4], char string2[9], char string3[]);

int main(void){

    char palavra1[] = {'p', 'a', 'o', ' '};
    char palavra2[] = {'m','o', 'r', 't', 'a', 'd', 'e', 'l', 'a'};
    char novapalavra[13];

    concatenarStrings(palavra1, palavra2, novapalavra);

    for(int i = 0; i < 13; i++){
            printf("%c",novapalavra[i]);
    }
}

void concatenarStrings(char string1[4], char string2[9], char string3[]){
    int i , j;  

    for( i = 0; i < 4; i++){
        string3[i] = string1[i];
    }

    for( j = 0; j < 9; j++){
        string3[i+j] = string2[j];
        }

}