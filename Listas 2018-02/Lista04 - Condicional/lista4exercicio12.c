/*Criar um algoritmo que leia dois valores para as variáveis A e B, que
efetue a troca dos valores de forma que a variável A passe a ter o valor
da variável B e que a variável B passe a ter o valor da variável A.
Apresente os valores trocados. */

#include <stdio.h>

int main() {
    int variavelA, variavelB, auxiliarTroca;

    printf("Declare dois valores: \n");
    scanf("%d %d", &variavelA, &variavelB);

    auxiliarTroca = variavelA;
    variavelA = variavelB;
    variavelB = auxiliarTroca;

    printf("A ordem inversa dos valores apresentados é: %d, %d", variavelA, variavelB);
    return 0;
}