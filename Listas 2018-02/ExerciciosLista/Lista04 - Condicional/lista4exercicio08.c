/*O custo ao consumidor de um carro novo é a soma do custo de fábrica
com o percentual do distribuidor e dos impostos (aplicados ao custo
de fábrica). Supondo que o percentual do distribuidor seja de 28% e os
impostos de 45%, escreva um algoritmo que leia o custo de fábrica de
um carro e escreva o custo do consumidor. */

#include <stdio.h>

int main() {
    float custoFabrica, percentualDistribuidor, impostos, custoConsumidor;

    percentualDistribuidor = 0.28;
    impostos = 0.45;
    custoConsumidor = 0;

    printf("Declare o custo de fábrica do veículo: \n");
    scanf("%f", &custoFabrica);

    custoConsumidor = custoFabrica + custoFabrica*percentualDistribuidor + custoFabrica*impostos;

    printf("O custo ao consumidor do carro novo é: %.2f", custoConsumidor);
    return 0;
}