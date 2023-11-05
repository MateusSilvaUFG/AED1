#include <stdio.h>

struct horario{
            int horas;
            int minutos;
            int segundos;
    };


struct  horario teste(struct horario agora1){
            printf("%i:%i:%i\n",agora1.horas, agora1.minutos, agora1.segundos);

            agora1.horas = 10;
            agora1.minutos = 30;
            agora1.segundos = 59;

            return agora1;
        }

int main(){
    
    
    struct horario agora;

    agora.horas = 7;
    agora.minutos = 26;
    agora.segundos = 58;

    struct horario proxima;
    proxima = teste(agora);

    printf("%i:%i:%i\n",proxima.horas, proxima.minutos, proxima.segundos);
        
    return 0;
}