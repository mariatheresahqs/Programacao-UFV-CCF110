#include <stdio.h>

int main() {

    int valorN, i=1;
    float E=0;
    printf("Declare um valor inteiro positivo: \n");
    scanf("%d", &valorN);
    while (valorN<0){
        printf("Declare um valor inteiro positivo: \n");
        scanf("%d", &valorN);
    }
    while (i<=valorN){
        E = (1.0/i) + E;
        i++;
    }
    printf("O valor de E é: %.2f", E);
    return 0;
}