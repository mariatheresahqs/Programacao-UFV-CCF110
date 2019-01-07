#include <stdio.h>

int main() {
    int i, contador=0;
    for(i=1000;i<2000;i++){
        printf("%d ", i);
        if((i%25)==0 & i!=1000){
            printf("\n");
        }
    }
    printf("\n\nValores divididos por 11 com resto 5 são:\n\n");

    for(i=1000;i<2000;i++) {
        if ((i % 11) == 5) {
            printf("%d ", i);
            contador++;
            if((contador%5)==0){
                printf("\n");
            }
        }
    }
    return 0;
}