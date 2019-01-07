#include <stdio.h>

int main() {
    int numero1, numero2, soma;
    printf("Digite dois números: \n");
    scanf("%d %d", &numero1, &numero2);
    soma = numero1 + numero2;
    if(soma>20){
        soma+=8;
    }else{
        soma-=5;
    }
    printf("O valor final é %d.\n", soma);
    return 0;
}