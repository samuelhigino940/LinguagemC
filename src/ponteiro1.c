#include <stdio.h>

int main(){
   //Declaração da viavel idade
   int idade=18;
   // declaração de variavel de ponteiro
   int *p_idade= &idade;
   printf("A idade é %d e esta em %p e %p e com o valor %d\n",idade,&idade,p_idade,*p_idade);



    return 0;
}