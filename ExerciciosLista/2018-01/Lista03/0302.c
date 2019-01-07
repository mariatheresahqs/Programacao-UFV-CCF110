#include <stdio.h>

int main() {
    int valor;
    printf("Declare um valor:\n");
    scanf("%d", &valor);
    if(valor%2==0){
        printf("Valor divisível por 2.\n");
    }
    if(valor%3==0){
        printf("Valor divisível por 3.\n");
    }
    if(valor%5==0){
        printf("Valor divisível por 5.\n");
    }
    if((valor%2==0)&&(valor%3==0)){
        printf("Valor divisível por 6.\n");
    }
    if((valor%2==0)&&(valor%5==0)){
        printf("Valor divisível por 10.\n");
    }
    if(valor%2!=0 && valor%3!=0 && valor%5!=0){
        printf("O valor não é divisível por 2, 3, 5 e 10.\n");
    }
    return 0;
}