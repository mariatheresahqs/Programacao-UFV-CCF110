/*Escreva um algoritmo que leia 200 números e escreva quantos são
pares e quantos são ímpares */

#include <stdio.h>

int main() {
    int quantidade, valor, contadorPar, contadorImpar, i = 0;

    quantidade = 200;
    contadorPar = 0;
    contadorImpar = 0;

    for (i = 0; i < quantidade; i++) {
        printf("Declare um valor:\n");
        scanf("%d", &valor);
        if (valor % 2 == 0) {
            contadorPar++;
        } else {
            contadorImpar++;
        }
    }
    printf("Dentre os valores declarados %d são pares e %d são ímpares.", contadorPar, contadorImpar);

    return 0;
}