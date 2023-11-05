#include <stdio.h>

int main (void){

    struct horario
    {
        int horas;
        int minutos;
        int segundis;
    };
       

struct horario agora;

agora.horas = 15;
agora.minutos = 19;
agora.segundis = 40;

printf("%i:%i:%i\n",agora.horas, agora.minutos, agora.segundis);

    return 0;
}