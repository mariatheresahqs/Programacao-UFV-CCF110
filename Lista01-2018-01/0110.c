#include <stdio.h>

int main() {
    int lado, area, perimetro;
    printf("Declare o lado do quadrado: \n");
    scanf("%d", &lado);
    area = lado*lado;
    perimetro = 4*lado;
    printf("A área do quadrado é %d e o perímetro é %d.\n", area, perimetro);
    return 0;
}