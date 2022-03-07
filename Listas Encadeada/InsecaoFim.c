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

void addFirt(int x, int y){

    Pontos *p = (Pontos*) malloc(sizeof(Pontos));

    p->x = x;
    p->y = y;

    p->prox = listapontos;
    listapontos = p;

}

void addLast(float x, float y)
{
	Pontos *p = (Pontos*) malloc(sizeof(Pontos));
	p->x = x;
	p->y = y;
	p->prox = NULL;

	if(listapontos==NULL){
		listapontos = p;
        
	}else{
		Pontos *listaAux = listapontos;
		while(listaAux->prox!=NULL){
			listaAux = listaAux->prox;
		}
		listaAux->prox = p;
	}
}

void imprime(Pontos *p){

    if (p != NULL){

        printf("\n Pontos %d, %d", p-> x, p->y);
        imprime(p->prox);
    }
    
}


int main(){

    addFirt(1,2);
    addFirt(4, 8);
    addFirt(12, 16);
    addFirt(48, 120);

    addLast(200,400);
    addLast(400,800);

    Pontos  *auxImprime = listapontos;
    imprime(auxImprime);
}

