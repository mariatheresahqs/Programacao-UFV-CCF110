#include <stdio.h>

int main() {
    int fatorial (int numero);
    int valor, resultado=0;
    printf("Declare um valor:\n");
    scanf("%d", &valor);
    resultado = fatorial(valor);
    printf("O resultado fatorial desse valor é %d.\n", resultado);
    return 0;
}

int fatorial(int numero){
    int resultado;
    if(numero==0){
        resultado=1;
    } else{
        resultado = numero*fatorial(numero-1);
    }
    return resultado;
}