#include <stdio.h>

int soma(int primeiroValor, int segundoValor){
    int somaValores, i;
    for(i=primeiroValor;i<=segundoValor;i++){
        somaValores +=i;
    }
    return somaValores;
}

int main() {
    int valor1, valor2, resultado;
    printf("Declare dois valores:\n");
    scanf("%d %d", &valor1, &valor2);
    resultado = soma(valor1,valor2);
    printf("A soma dos inteiros existentes entre\nos valores declarados, incluindo-os, é %d.\n", resultado);
    return 0;
}