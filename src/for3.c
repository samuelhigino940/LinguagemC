#include <stdio.h>

int main(){
 
 int num;
 int bissexto =0;
 for(num=1930; num <=2024; num++){
    if (num % 4== 0){
        printf ("%d\n", num);
        bissexto++;
    }
 }
    printf("A quantidade de ano bissexto é de %d \n", bissexto);
 return 0;
}
