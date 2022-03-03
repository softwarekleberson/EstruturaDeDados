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

void imprime(){

    Pontos  *auxImprime = listapontos;

    while (auxImprime != NULL)
    {
        printf("\n Pontos %d, %d", auxImprime->x, auxImprime->y);
        auxImprime = auxImprime ->prox;
    }
    
}


int main(){

    add(1,2);
    add(4, 8);
    add(12, 16);
    add(48, 120);

   imprime();
}

/* 

Pontos *listapontos;
Esse *listapontos fará uma uniam que ligara a struct principal Pontos a outra struct

- *listapontos e um ponteiro que aponta para o mini struct da struct
- O novo *p passa as suas informações de ponteiro para o *listapontos
- Formando assim um elo continuo

*/


/*

Funcao imprime

- Tenho que criar um novo ponteiro, pois se eu uso o mesmo eu perco a referencia na memoria
- Enquanto esse novo ponteiro não for nulo continue a imprimir
-         auxImprime = auxImprime ->prox;
- Nessa linha o ponteiro auxiliar ira passar para o proximo elemento a referencia do proximo struct menor que eta contida na struct maior

*/