#include <stdio.h>

int main() {
    float litrosCombustivel, distancia, velocidade, tempo;
    printf("Declare o tempo, em minutos, de viagem:\n");
    scanf("%f",&tempo);
    tempo = tempo/60;
    printf("Declare a velocidade média, em km/h, da viagem:\n");
    scanf("%f",&velocidade);
    distancia = velocidade*tempo;
    litrosCombustivel = distancia/12;
    printf("A distância percorrida foi %.2fkm, e a quantidade de litros \nde combustível gastos foram %.2fl.\n", distancia,litrosCombustivel);
    return 0;
}