#include <stdio.h>

int maior(int valor1, int valor2){
    int maior;
    if(valor1>=valor2){
        maior = valor1;
    } else{
        maior = valor2;
    }
    return maior;
}

int main() {
    int primeiroValor, segundoValor, maiorValor;
    printf("Declare dois valores:\n");
    scanf("%d %d", &primeiroValor, &segundoValor);
    maiorValor = maior (primeiroValor, segundoValor);
    printf("O maior valor digitado foi: %d", maiorValor);
    return 0;
}