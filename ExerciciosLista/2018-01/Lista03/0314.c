#include <stdio.h>

int main() {
    int valor, somaNegativos=0;
    while(1){
        printf("Declare um valor:\n");
        scanf("%d",&valor);
        if(valor==0){
            break;
        }
        if(valor<0){
            somaNegativos+=valor;
        }
    }
    printf("O somatório dos números negativos é: %d.\n", somaNegativos);
    return 0;
}
