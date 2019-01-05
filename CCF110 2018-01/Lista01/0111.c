#include <stdio.h>

int main() {
    int numero;
    printf("Declare um valor: \n");
    scanf("%d", &numero);
    if(numero>20){
        printf("Valor é maior que 20.\n");
    }
    else {
        printf("Valor inferior ou igual a 20.\n");
    }
    return 0;
}