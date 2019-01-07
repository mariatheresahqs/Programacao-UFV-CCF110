#include <stdio.h>

int main() {
    int valorA, valorB, i, j, quantidade=5;
    for(i=0; i<quantidade;i++) {
        printf("Digite dois valores inteiros e positivos, sendo o primeiro inferior ao segundo:\n");
        scanf("%d %d", &valorA, &valorB);
        if(valorA>valorB){
            printf("O primeiro valor é superior ao segundo. Cálculo não permitido.\n");
        }
        for(j=valorA; j<=valorB;j++){
            if(j%2==0){
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}