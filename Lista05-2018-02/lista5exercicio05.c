#include <stdio.h>

int main() {
    int intervalo=500,soma=0, i;
    for(i=1;i<=intervalo;i++){
        if (i%2==0) {
            soma = soma + i;
        }
    }
    printf("A soma de todos os números pares no intervalo de 1 a %d é %d.\n", intervalo, soma);
    return 0;
}