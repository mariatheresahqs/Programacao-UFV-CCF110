#include <stdio.h>

int main() {
    float grausCelsius, grausFahrenheit;
    printf("Declare a temperatura em graus Celsius: \n");
    scanf("%f", &grausCelsius);
    grausFahrenheit= (grausCelsius*1.8)+32;
    printf("A temperatura declarada em Celsius é equivalente a %.2f em Fahrenheit.\n", grausFahrenheit);
    return 0;
}