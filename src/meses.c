#include <stdio.h>

int main(){
    int numero_mes;
    printf("Digite o Número do mês e tecle enter\n");
    scanf("%d", &numero_mes);
    switch (numero_mes){
        case 1:
        printf("Janeiro\n");
        break;
        
        case 2:
        printf("Fevereiro\n");
        break;
        
        case 3:
        printf("Março\n");
        break;
        
        case 4:
        printf("Abril\n");
        break;

        case 5:
        printf("maio\n");
        break;

        case 6:
        printf("junho\n");
        break;

        case 7:
        printf("Julho\n");
        break;

        case 8:
        printf("Agosto\n");
        break;

        case 9:
        printf("Setembro\n");
        break;

        case 10:
        printf("outubro\n");
        break;

        case 11:
        printf("Novembro\n");
        break;

        case 12:
        printf("Dezembro\n");
        break;

        default:
        printf("ESte mês não existe\n");
        break;

    }
    return 0;
}
