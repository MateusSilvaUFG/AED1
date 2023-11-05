#include <stdio.h>

int main(){

struct horario{
            int horas;
            int minutos;
            int segundos;
    }agora, proxima = { 10, 20 ,30}, zero = {24,0,0}; //quando colocar apenas 1 valor, 
                                                     //todos os outros ficam = 0;
    agora.horas = 7;
    agora.minutos = 26;
    agora.segundos = 58;
    
    printf("%i:%i:%i\n",agora.horas, agora.minutos, agora.segundos);
    printf("%i:%i:%i\n",zero.horas, zero.minutos, zero.segundos);
    printf("%i:%i:%i\n",proxima.horas, proxima.minutos, proxima.segundos);
        
    return 0;
}