#include <stdio.h>

int main() {
    float custoConsumidor, custoFabrica, percentualDistribuidor, impostos;
    percentualDistribuidor = 0.28;
    impostos = 0.45;
    printf("Declare o valor de fábrica do carro: \n");
    scanf("%f", &custoFabrica);
    custoConsumidor = custoFabrica + custoFabrica*impostos + custoFabrica*percentualDistribuidor;
    printf("O custo do carro para o consumidor é: %.2f.\n", custoConsumidor);
    return 0;
}