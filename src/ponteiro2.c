#include <stdio.h>

void dados(int *x, int *y){
    int soma= *x+*y;
    printf("x esta em %p e y está em %p\n", x,y);
    printf("O resultado é %d\n",soma);

}
int main(){
    int a=10;
    int b=5;
    dados(&a,&b);
    printf("a está em %p e b está em %p\n",&a,&b);
    return 0;

}