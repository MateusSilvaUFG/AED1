#include <stdio.h>

float calcularAreaQuadrado (float base, float altura){

    float area = base * altura;


    return  area;
}

int main (){

    float x, y;

    printf("Digite a base.\n");
    scanf("%f", &x);

    printf("Digite a altura.\n");
    scanf("%f", &y);

    float area = calcularAreaQuadrado(x,y);

    printf("A area e = %2.f.\n", area);
    return 0;
}