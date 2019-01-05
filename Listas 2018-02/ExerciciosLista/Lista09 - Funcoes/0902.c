#include <stdio.h>

int parImpar (int valor){
    int flagParImpar;
    if(valor%2==0){
        flagParImpar=1;
    } else{
        flagParImpar=0;
    }
    return flagParImpar;
}

int main() {
    int valor, resultadoParImpar;
    printf("Declare um valor:\n");
    scanf("%d", &valor);
    resultadoParImpar = parImpar(valor);
    if(resultadoParImpar==1){
        printf("Valor declarado é par.\n");
    } else{
        printf("Valor declarado é ímpar.\n");
    }
    return 0;
}