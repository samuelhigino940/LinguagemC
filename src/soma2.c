#include <stdio.h>
int main(){
    int n1;
    int n2;
    int rs;
    printf("Digite um numero: \n");
    // alocar o número digitado pelo usuario no
    // enndereço de memória da variavel n1
    scanf("%d",&n1);
    printf("Digitando outro número: \n");
    scanf("%d",&n2);
    
    // realizar a soma entre n1 e n2
    rs = n1+n2;
    
    // exibir o resultado da soma
    printf("O resultado é %d\n", rs);
    return 0;


}