#include <stdio.h>

int main() {
    int valorN, i;
    float E=0;
    printf("Declare um valor inteiro positivo: \n");
    scanf("%d", &valorN);
    while (valorN<0){
        printf("Declare um valor inteiro positivo: \n");
        scanf("%d", &valorN);
    }
    for (i=1; i<=valorN; i++){
        E = (1.0/i) + E;
    }
    printf("O valor de E é: %.2f", E);
    return 0;
}