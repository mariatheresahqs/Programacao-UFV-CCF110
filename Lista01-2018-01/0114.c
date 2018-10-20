#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número:\n");
    scanf("%d", &numero);
    if(numero%2==0){
        printf("O número digitado é par.\n");
    }else{
        printf("O número digitado é ímpar.\n");
    }
    return 0;
}