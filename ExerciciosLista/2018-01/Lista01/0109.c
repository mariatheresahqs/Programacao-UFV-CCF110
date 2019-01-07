#include <stdio.h>
#include <math.h>

int main() {
    int numero1, numero2, numero3, soma;
    printf("Declare três valores: \n");
    scanf("%d %d %d", &numero1, &numero2, &numero3);
    soma = pow(numero1,2) + pow(numero2,2) + pow(numero3,2);
    printf("A soma dos quadrados dos tres valores é: %d.\n", soma);
    return 0;
}