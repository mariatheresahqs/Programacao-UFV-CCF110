#include <stdio.h>

int fibonacci(int valor){
    if (valor==1 || valor==0){
        return 1;
    }
    else{
        return fibonacci(valor-1) + fibonacci(valor-2);
    }
}

int main() {
    int quantidade,i;
    printf("Declare a quantidade de termos da sequência de Fibonacci a serem mostrados:\n");
    scanf("%d", &quantidade);
    printf("A sequência de Fibonacci até o valor %d é:\n", quantidade);
    for(i=0;i<quantidade;i++){
        printf("%d ", fibonacci(i));
    }

    return 0;
}