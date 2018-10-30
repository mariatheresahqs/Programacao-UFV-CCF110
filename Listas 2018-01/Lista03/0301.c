#include <stdio.h>

int main() {
    int valorA, valorB, temporario;
    printf("Declare um valor para a variável A e outro para a variável B:\n");
    scanf("%d %d", &valorA, &valorB);
    temporario = valorA;
    valorA = valorB;
    valorB = temporario;
    printf("Após a troca, a variável A agora tem o valor %d, e a variável B tem o valor %d.\n", valorA, valorB);
    return 0;
}