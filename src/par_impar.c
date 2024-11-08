#include <stdio.h>
#include "../lib/teste.h"

int main(){
    int n;
    printf("Digite um Número e tecle enter\n");
    scanf("%d" ,&n);

if(n % 2 == 0){
    printf("O número %d é par\n");
}
else{
    printf("O Número %d é Impar\n");
}
return 0;
}