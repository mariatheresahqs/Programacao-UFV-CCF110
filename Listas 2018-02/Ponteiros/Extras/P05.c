#include <stdio.h>

int main() {
    int x, y, *ponteiro;
    x =42;
    y = x;
    ponteiro = &x;

    x+=11;

    printf("x = %d\n", x);// x = 53
    printf("&x = %d\n", &x);// endereco de x
    printf("y = %d\n", y);// y = 42
    printf("&y = %d\n", &y);// endereco de y
    printf("ponteiro = %d\n", ponteiro);// endereceo de x
    printf("&ponteiro = %d\n", &ponteiro);// endereco do ponteiro
    printf("*ponteiro = %d\n", *ponteiro); // valor de x, *ponteiro = 53

    return 0;
}