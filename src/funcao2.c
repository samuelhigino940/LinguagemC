#include <stdio.h>

int devolveresto(int valor, int div);

int main(){
  printf("O resto entra os numeros 2 e 5 é %d\n" ,devolveresto(2,5));
     return 0;
}

int devolveresto(int valor,int div){
    return valor % div;
}