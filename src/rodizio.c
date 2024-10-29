#include <stdio.h>

int main(){
    int placa;
    printf("Digite o Número final da placa do seu veiculo e tecle enter\n");
    scanf("%d",&placa);

    if(placa==1 || placa == 2){
        printf("Este veiculo não pode circular na SEgunda-Feira");
    }
else if(placa ==3 || placa==4){
    printf("Este veiculos não pode circular na Terça-Feira");
}
else if(placa ==5 || placa==6){
    printf("Este veiculos não pode circular na Quarta-feira ");
}
else if(placa ==7 || placa==8){
    printf("Este veiculo não pode circular na Quinta-Feira");
}
else if(placa ==9 || placa ==0){
    printf("Este veiculo não pode circular na Sexta-Feira");
}

printf("\n");
return 0;
}

