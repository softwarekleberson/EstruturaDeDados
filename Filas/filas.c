#include<stdlib.h>
#include<stdio.h>

struct pessoa
{
    int senha;
    struct pessoa *prox;
};

typedef struct pessoa Pessoa;
Pessoa *fila;

void add(int senha){

    Pessoa *p = (Pessoa*)malloc(sizeof(Pessoa));
    p->senha = senha;
    p->prox = NULL;

    if (fila == NULL){
        fila = p;
    }else{
        Pessoa *filaAux = fila;
        while (filaAux->prox != NULL){
            filaAux = filaAux->prox;
        }
        filaAux->prox = p;
    }
}

void imprime(Pessoa *f){

    if(f != NULL){
        printf(" \n Senha : %d", f->senha);
        imprime(f->prox);
    }
}

void remover(){
    if(fila == NULL){
        printf("FILA VAZIA");
    }else{
        fila = fila->prox;
    }
}

int main(){

    add(8);
	add(10);
	add(22);

	Pessoa *filaAux = fila;
	imprime(filaAux);

	printf("\n");

	remover();

	filaAux = fila;
	imprime(filaAux);

	printf("\n");

	remover();

	filaAux = fila;
	imprime(filaAux);


}