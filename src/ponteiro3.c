#include <stdio.h>

int main(){
    int valores[]={32,55,26,8,64,18,72};
    int *p_valores= valores;
    printf("%p com valor %d\n", p_valores,*p_valores);
    p_valores++;
    printf("%p com valor %d\n", p_valores,*p_valores);
    




   return 0;
}