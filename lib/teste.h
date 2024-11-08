
#include <stdio.h>
int maiorvalor(int n[], int qtd){
    int m = n[0];
    int i;

    for (i = 1; i < qtd; i++){
        if (n[i]>m){
       m = n[i];
        } 
        
    }
    return m; 
}


char sexo(char letra){
    if (letra == 'f') {
        printf("Feminino");
    }
    else if (letra == 'm') {
        printf("masculino");
    }
    else {
        printf("inexistente");
    }
    

}

void vogal(char letra){
    if (letra == 'a'){
        printf ("%c é vogal",letra);
    }
    else if (letra == 'e'){
        printf ("%c é vogal",letra);
    }
       else if (letra == 'i'){
        printf ("%c é vogal",letra);
    }
       else if (letra == 'o'){
        printf ("%c é vogal",letra);
    }
       else if (letra == 'u'){
        printf ("%c é vogal",letra);
    }
    else {
        printf("%c Nâo é vogal",letra);
    }

}

void reajuste(float salario){

    float valor_aumento;
    float novo_salario;
    if(salario<=280){
        valor_aumento=salario * (20.0/100);
        novo_salario = salario+valor_aumento;
        printf("O Salario antigo é %f e foi reajustado em 20%. O Valor de aumento é %f e  novo salario é %f\n, salario,aumento,novo_salario");    
    }
    else if(salario <=700)
    valor_aumento=salario * (15.0/100);
        novo_salario = salario+valor_aumento;
        printf("O Salario antigo é %f e foi reajustado em 20%. O Valor de aumento é %f e  novo salario é %f\n")salario,aumento,novo_salario);
}

else if(salario <=1500){
    valor_aumento=salario * (10.0/100);
    novo_salario=salario+valor_aumento;
    printf("O salario antigo é %f e foi reajustado em 10%. O valor de aumento é %f e novo salario é %f\n") salario,aumento,novo_salario);
}
else{
    valor_aumento=salario * (5.0/100);
    novo_salario=salario+valor_aumento;
    printf("O salario antigo é %f e foi reajustado em 10%. O valor de aumento é %f e novo salario é %f\n") salario,aumento,novo_salario);
}

