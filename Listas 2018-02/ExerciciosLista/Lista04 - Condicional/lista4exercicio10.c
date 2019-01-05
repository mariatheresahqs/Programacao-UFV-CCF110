/*Escreva um algoritmo que receba 400 números do usuário e escreva o
cubo de cada número. */

#include <stdio.h>
#include <math.h>

int main() {
    int quantidade, valor, i;

    quantidade = 400;

    for(i=0;i<quantidade;i++) {
        printf("Declare um valor:\n");
        scanf("%d",&valor);
        valor = pow(valor,3);
        printf("O cubo do valor declarado é: %d\n", valor);
    }
    return 0;
}