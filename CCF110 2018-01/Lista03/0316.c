#include <stdio.h>

int main() {
    int i, valor, tabuada, tamanho=10;
    printf("Declare %d valores desejados para o cálculo de tabuada de 1 até o valor declarado:\n", tamanho);
    while(tamanho!=0) {
        scanf("%d", &valor);
        for (i = 1; i <= valor; i++) {
            tabuada = valor*i;
            printf("%d\n", tabuada);
        }
        tamanho--;
    }
    return 0;
}
