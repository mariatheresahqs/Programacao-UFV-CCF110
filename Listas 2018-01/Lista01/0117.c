#include <stdio.h>

int main() {
    int numero;
    printf("Digite um valor: \n");
    scanf("%d", &numero);
    if(numero%3==0){
        printf("Esse valor é múltiplo de de três.\n");
    } else{
        printf("Esse valor não é múltiplo de de três.\n");
    }
    return 0;
}