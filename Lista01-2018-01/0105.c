#include <stdio.h>
#include <math.h>

int main() {
    float volume, raio, altura;
    printf("Declare o valor da altura da lata:\n");
    scanf("%f", &altura);
    printf("Declare o raio da circunferencia da base da lata:\n");
    scanf("%f", &raio);
    volume=(3.14159*pow(raio,2)*altura);
    printf("O volume da lata é: %.2f. \n", volume);
    return 0;
}