#include <stdio.h>

void funcaoPrint(int x, int vetor[3]){

    x = x + 10;
    vetor [1] = 20;

    
    printf("Variavel int na funcao principal = %i \n", x);
    printf("Vetor na funcao principal  = %i \n", vetor[1]);    


}
int main (){
    
    int x = 10;
    int vetor[3] = {10};

    funcaoPrint(x, vetor);

    printf("Variavel int na funcao principal = %i \n", x);
    printf("Vetor na funcao principal  = %i \n", vetor[1]);

    return 0;
}