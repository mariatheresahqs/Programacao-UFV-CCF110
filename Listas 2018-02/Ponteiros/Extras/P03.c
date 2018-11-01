#include <stdio.h>

int main() {
    int valor1, *ponteiro;
    valor1 = 42;
    ponteiro = &valor1;
    printf("Valor da variável %d.\n",valor1);
    printf("Endereço da variável %d.\n", &valor1);
    printf("Valor do ponteiro %d.\n", ponteiro);
    printf("Endereço do ponteiro %d.\n", &ponteiro);
    printf("Valor da variável que o ponteiro aponta %d.\n",*ponteiro);
    return 0;
}