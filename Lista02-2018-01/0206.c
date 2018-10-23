#include <stdio.h>

int main() {
    int numeros, i;
    numeros = 500;
    for(i=1; i<=numeros;i++){
        if(i<10){
            printf("  ");
        }
        if(i>=10 && i<100){
            printf(" ");
        }
        printf("%d ", i);
        if(i%10==0){
            printf("\n");
        }

    }
    return 0;
}
