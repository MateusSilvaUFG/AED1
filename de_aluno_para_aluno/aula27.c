#include <stdio.h>

int main (){

    float matriz[4][4];
    float media[4], total = 0;
    int aluno = 1;

    for(int i = 0; i < 4; i++){
        printf("Digite 4 notas do %i de  0 a 10.\n", i);
        for(int j = 0; j < 4; j++){
            scanf("%f", &matriz[i][j]);
            total += matriz[i][j];
        }

        media[i]= total / 4;

        printf("Media do aluno %i e igual  a %.2f.\n",aluno, media[i]);
        printf("\n");

         aluno++;
         total = 0;
    }

    aluno = 0;

    // outra forma de imprimir os numeros na tela.
    for(int i = 0; i < 4; i++){
        printf("Media do aluno %i e igual  a %.2f.\n",aluno, media[i]);
        aluno++;
    }
}