/*Fazer um algoritmo que leia o valor do salário mínimo e o valor do
salário de uma pessoa. Calcular e escrever quantos salários mínimos
essa pessoa ganha. */

#include <stdio.h>

int main() {
    float salarioMinimo, valorSalario, quantidadeSalariosMinimos;

    printf("Declare o valor do salário mínimo atual: \n");
    scanf("%f",&salarioMinimo);
    printf("Declare o valor do salário recebido: \n");
    scanf("%f", &valorSalario);

    quantidadeSalariosMinimos = valorSalario/salarioMinimo;

    printf("A quantidade de salários mínimos recebidos é: %.2f", quantidadeSalariosMinimos);

    return 0;
}