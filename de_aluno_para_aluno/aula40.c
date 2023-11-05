#include <stdio.h>

int main (void){

    struct horario
    {
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;
    };
       

struct horario agora;

agora.horas = 15;
agora.minutos = 19;
agora.segundos = 40;

printf("%i:%i:%i\n",agora.horas, agora.minutos, agora.segundos);

struct horario depois;

depois.horas = agora.horas + 10;
depois.minutos = agora.minutos;
depois.segundos = agora.segundos = 40;
depois.teste = 50.55 / 12;
depois.letra = 'a';

printf("%i:%i:%i\ndouble= %f\nletra= %c",depois.horas, depois.minutos, depois.segundos, depois.teste, depois.letra);    

    return 0;
}