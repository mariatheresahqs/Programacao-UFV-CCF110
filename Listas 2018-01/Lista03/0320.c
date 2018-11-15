#include <stdio.h>

int main() {
    int valorInicial, valorFinal, i;
    printf("Declare dois valores inteiros:\n");
    scanf("%d %d", &valorInicial, &valorFinal);
    if(valorInicial<=valorFinal){
        for (i=valorInicial;i<=valorFinal;i++) {
            printf("%d ",i);
            if(i%5==0){
                printf("\n");
            }
        }
    }
    else if(valorInicial>valorFinal){
        for(i=valorInicial;i>=valorFinal;i--){
            printf("%d ",i);
            if(i%5==0){
                printf("\n");
            }
        }
    }
    return 0;
}