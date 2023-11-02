#include <stdio.h>

int main(){

    int matriz[3][3];
    int m = 1;


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz[i][j]= m;
            printf("%i",matriz[i][j]);
            m++;
        }
        printf("\n");
    }

    return  0;
}