#include <stdio.h>

int main() {
    int numero1, numero2, soma=0;
    printf("Declare dois valores:\n");
    scanf("%d %d", &numero1, &numero2);
    soma = numero1 + numero2;
    printf("O resultado da soma é: %d", soma);
    return 0;
}