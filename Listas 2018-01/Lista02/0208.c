#include <stdio.h>

int main() {
    int numeros, i, valor, menor, maior;
    printf("Declare a quantidade de valores a serem lidos:\n");
    scanf("%d", &numeros);
    scanf("%d",&valor);
    maior = valor;
    menor = valor;
    for(i=1;i<numeros;i++){
        scanf("%d",&valor);
        if(valor>maior){
            maior=valor;
        }
        if(valor<menor){
            menor=valor;
        }
    }
    printf("O maior valor digitado foi %d, e o menor valor digitado foi %d.\n", maior, menor);
    return 0;
}
