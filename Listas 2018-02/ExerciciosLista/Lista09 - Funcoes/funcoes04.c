#include <stdio.h>

int maior(){
    int valor1, valor2, maior;
    printf("Declare dois valores:\n");
    scanf("%d %d", &valor1, &valor2);
    if(valor1>=valor2){
        maior = valor1;
    } else{
        maior = valor2;
    }
    return maior;
}

int main() {
    int maiorValor;
    maiorValor = maior();
    printf("O maior valor declarado foi: %d.\n", maiorValor);
    return 0;
}