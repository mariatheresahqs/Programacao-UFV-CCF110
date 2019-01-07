#include <stdio.h>

int main() {
    int numeros, i, valor, quantidadePar=0, quantidadeImpar=0;
    printf("Digite quantos valores serão declarados:\n");
    scanf("%d", &numeros);
    for(i=0;i<numeros;i++){
        scanf("%d", &valor);
        if(valor%2==0 && valor!=0){
            quantidadePar++;
        }
        else if(valor%2!=0 && valor!=0){
            quantidadeImpar++;
        }
    }
    printf("A quantidade de números pares digitados foi %d, e de ímpares foi %d.\n", quantidadePar, quantidadeImpar);
    return 0;
}
