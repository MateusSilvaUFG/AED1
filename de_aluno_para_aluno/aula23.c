#include <stdio.h>

int main (void){

    int vetor[5];

    for (int i = 0; i < 5; i++){
        printf("Digite um valor inteiro.\n");
        scanf("%i",&vetor[i]);

        printf("o valor digitado e %i\n",vetor[i]);
        printf("\n");
    }

    
    int vetor1[5] = {1,2};

    for (int i = 0; i < 5; i++){
        if(vetor1[i] > 0)
            printf("o valor inserido e %i\n",vetor1[i]);
        else 
            printf("o valor inserido pelo sistema e %i\n",vetor1[i]);
    }
}