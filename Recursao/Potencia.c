#include<stdlib.h>
#include<stdio.h>


int potencia(int base, int exp){

    if (exp == 1){
        return base;
    }
    
   return base * potencia(base, exp - 1);
}


int main(){

    int valor = potencia(2,4);

    printf("%d ", valor);
}
