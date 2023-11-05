#include <stdio.h>

struct horario{
    int hora;
    int minuto;
    int segundo;
}vetor[5];

void lerHorario(struct horario ler[5]);
void imprimir(struct horario imprimir[5]);

int main(){

    lerHorario(vetor);


}

void lerHorario(struct horario ler[5]){

    for(int i = 0; i < 5; i++){
        scanf("%i %i %i", &ler[i].hora, &ler[i].minuto, &ler[i].segundo);
    }
    imprimir(ler);
}

void imprimir(struct horario imprimir[5]){
    for(int i = 0; i < 5; i++){
        printf("%i:%i:%i\n", imprimir[i].hora, imprimir[i].minuto, imprimir[i].segundo);
    }
}