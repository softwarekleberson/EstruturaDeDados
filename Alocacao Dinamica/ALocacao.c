#include<stdio.h>
#include<stdlib.h>

struct pontos
{
   int x;
   int y;
};

typedef struct pontos Ponto;

int main(){

    /*Eu chamo a variavel p que vai receber o tipo de dados que eu devo alocar no caso : Ponteiro
    /* depois eu malloc pelo tamanho e o tipo de dados que eu vou receber no caso o Ponteiro
    */

    Ponto *p = (Ponto*) malloc(sizeof(Ponto));

    p->x = 10;
    p->y = 20;

    printf("\n %d ", p->x);
    printf("\n %d ", p->y);

}
