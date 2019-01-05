#include <stdio.h>

int main() {
    int numero;
    printf("Digite um valor: \n");
    scanf("%d", &numero);
    if(numero>0){
        printf("O valor é positivo.\n");
    }
    else if (numero<0){
        printf("O valor é negativo.\n");
    }else{
        printf("O valor é nulo.\n");
    }
    return 0;
}