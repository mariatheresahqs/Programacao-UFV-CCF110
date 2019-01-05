#include <stdio.h>

void alteracao (int *primeiroValor, int *segundoValor){
    *primeiroValor = *primeiroValor*2;
    *segundoValor = *segundoValor*2;
}

int main() {
    int valor1, valor2;
    printf("Declare dois valores:\n");
    scanf("%d %d", &valor1, &valor2);

    alteracao(&valor1, &valor2);

    printf("O dobro dos valores alterados é %d, %d.\n", valor1, valor2);

    return 0;
}