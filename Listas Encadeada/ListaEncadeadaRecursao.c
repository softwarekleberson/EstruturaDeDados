#include<stdio.h>
#include<stdlib.h>

struct pontos
{
    int x;
    int y;
    struct pontos *prox;
};

typedef struct pontos Pontos;

Pontos *listapontos;

void add(int x, int y){

    Pontos *p = (Pontos*) malloc(sizeof(Pontos));

    p->x = x;
    p->y = y;

    p->prox = listapontos;
    listapontos = p;

}

void imprime(Pontos *p){

    if (p != NULL){

        printf("\n Pontos %d, %d", p-> x, p->y);
        imprime(p->prox);
    }
    
}


int main(){

    add(1,2);
    add(4, 8);
    add(12, 16);
    add(48, 120);

    Pontos  *auxImprime = listapontos;
    imprime(auxImprime);
}

