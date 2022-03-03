#include<stdio.h>

    int num = 5;

    //Criei o ponteiro
    int *ponteiro;


int main(){

    //Esse ponteiro ira receber o endereco de memoria da variavel num
    ponteiro = &num;

    //Rcebe o valor dentro desse ponteiro
    printf("O valor e : %d", *ponteiro);

}