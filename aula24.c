#include <stdio.h>

int main()
{
    float notas[5] = {0};
    float total = 0;
    float media = 0;

    printf("insira 5 notas.\n");

    for(int i = 0; i < 5; i++){
        scanf("%f", &notas[i]);
        total += notas[i];
    }

    media = total / 5;
     
    printf("A nota Total = %.2f e a Media = %.2f", total, media);

    return 0;
}