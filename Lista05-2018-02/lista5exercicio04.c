#include <stdio.h>

int main() {
    int qntTriangulos,i;
    qntTriangulos=5;
    float base, altura;
    for (i=0; i<qntTriangulos; i++) {
        printf("Declare os valores de base e altura do triângulo %d: \n", (i+1));
        scanf("%f %f", &base, &altura);
        printf("O valor de área desse triângulo é: %.2f\n\n", (base*altura));
    }
    return 0;
}