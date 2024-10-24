#include <stdio.h>

int main(){
    float km_inicial, km_final, tempo_inicial, tempo_final,velocidade_média;

    //solitaçoes de valores em KM

    printf("Digite o km_inicial: ");
    scanf("%f", &km_inicial);
    
    printf("km_final: ");
    scanf("%f", &km_final);
    
    printf("Digite o tempo incial: ");
    scanf ("%f",&tempo_inicial);

    printf("Digite o tempo Final: ");
    scanf("%f", &tempo_final);

    // calcular velocidade media

    velocidade_média = (km_final - km_inicial) / (tempo_final - tempo_inicial);

    //mostrar o resultado da velocidade

    printf("A velocidade media é: %.2f km/h\n", velocidade_média);
    return 0;




}