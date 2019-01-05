#include <stdio.h>

int fatorial(int valor){
    int calculoFatorial=1, i;
    if(valor==1 || valor==0){
        calculoFatorial = 1;
    }
    for(i=valor;i>1;i--){
        calculoFatorial *= valor;
        valor--;
    }
    return calculoFatorial;
}

int main() {
    int valorDeclarado, resultadoFatorial;
    printf("Declare um valor:\n");
    scanf("%d", &valorDeclarado);
    resultadoFatorial = fatorial(valorDeclarado);
    printf("O fatorial do valor declarado é %d.\n", resultadoFatorial);
    return 0;
}