#include <stdio.h>

int main (void){

    float nota[5];

    nota[0] = 10;
    nota[1] = 9;
    nota[2] = 8;
    nota[3] = 7;
    nota[4] = 6;

    for(int i = 0; i < 5; i++){
        printf("Nota = %.2f\n",nota[i]);
        
    }

    return 0;
}