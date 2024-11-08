#include <stdio.h>
#include "../lib/teste.h"

int main(){
float salario;
printf("Digite o salario do funcionario\n");
scanf("%f",&salario);
reajuste(salario);

return 0;
}