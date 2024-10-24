#include <stdio.h>
int main(){
    // Notas de alunos e média
    float nota1, nota2, nota3, nota4, media ,soma ,divisao;

    //Entrada de notas e média

    printf("Digite a Nota1:");
    scanf ("%f", &nota1);

    printf("Digite a Nota2:");
    scanf("%f", &nota2);

    printf("Digite a nota3:");
    scanf("%f", &nota3);

    printf("Digite a Nota4:");
    scanf ("%f", &nota4);

    soma = nota1 + nota2 + nota3 + nota4;
    divisao = soma / 4;


    //calculo da média dos Alunos

    media =(nota1 + nota2 + nota3 + nota4) / 4;

    //Exibindo as notas dos alunos
    printf ("A média das notas é %.2f\n", divisao);
    return 0;




}