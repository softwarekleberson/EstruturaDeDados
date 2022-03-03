#include<stdio.h>

struct pessoa{

    int idade;
    float altura;
};

//Serve para renomear a struct, deixar mais simples de escrever
typedef struct pessoa Pessoa;

int main(){

    Pessoa p;

    p.idade = 28;
    p.altura = 1.80;

    printf("\n Idade da pessoa : %d ", p.idade);
    printf("\n Altura da pessoa : %.2f", p.altura);
}