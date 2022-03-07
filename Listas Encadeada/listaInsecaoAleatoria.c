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

int length = 0;

void addIndex(float x, float y, int index){
	Pontos *p = (Pontos*) malloc(sizeof(Pontos));
	p->x = x;
	p->y = y;

	if(index>length)
	{
		printf("Posicao Invalida.");
	}else{
		if(index==0){
			p->prox = listapontos;
			listapontos = p;
		}else{
			Pontos *listaAux = listapontos;
			int i=0;
			while(i!=index-1){
				listaAux = listaAux->prox;
				i++;
			}
			p->prox = listaAux->prox;
			listaAux->prox = p;
		}
		length++;
	}

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

    addIndex(1,1,0);
    addIndex(2,2,1);
    addIndex(3,3,1);
    addIndex(10,20,3);

   imprime();
}

