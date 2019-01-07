/*Faça um algoritmo para ler 3 números reais do teclado e verificar se o
primeiro é maior que a soma dos outros dois.*/

#include <stdio.h>

int main() {
    int valor1, valor2, valor3;
    printf("Digite três valore: \n");
    scanf("%d %d %d", &valor1, &valor2, &valor3);
    if (valor1>(valor2+valor3)){
        printf("O primeiro valor é maior que a soma dos outros dois.");
    }
    else {
        printf("O primeiro valor não é maior que a soma dos outros dois.");
    }
    return 0;
}