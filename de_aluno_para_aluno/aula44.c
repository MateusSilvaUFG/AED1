#include <stdio.h>

struct horario {
        int horas;
        int minutos;
        int segundos;
    }vetor[5];

void imprimir(struct horario x[5]){
    for(int i = 0; i < 5; i++){
            printf("%i:%i:%i\n", x[i].horas, x[i].minutos, x[i].segundos);
    }
        
}

int main(void){

    int a = 10, b = 20, c = 30;

    for(int i = 0; i < 5; i++){
            vetor[i].horas += a;
            vetor[i].minutos  += b;
            vetor[i].segundos  += c;
            
            a += 10;
            b += 20;
            c += 30;
    }

    imprimir(vetor);

    return 0;
}