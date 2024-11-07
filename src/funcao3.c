#include <stdio.h>
// O comando ../ faz a saida da pasta atual(src)
//e o lib é a pasta onde esta o arquivo de
// cabeçalho calculos.h
#include "../lib/calculos.h"

int main(){
    int valores[]= {5,27,10,15,20,4,12,90};
    printf("o resultado da soma é %d\n", SomaArray(valores,8));
    printf("O resultado de média é %d\n",MediaArray(valores,8));
    printf("O maior valor é %d\n", maiorValor(valores,8));
    return 0;
}