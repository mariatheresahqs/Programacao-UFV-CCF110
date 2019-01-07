#include <stdio.h>

int main() {
    int numero1, numero2, soma;
    printf("Declare dois valores: \n");
    scanf("%d %d", &numero1, &numero2);
    soma = numero1 + numero2;
    if (soma>10){
        printf("Soma entre os valores é %d.\n", soma);
    }
    else {
        printf("Soma entre os valores é igual ou inferior a 10.\n");
    }
    return 0;
}