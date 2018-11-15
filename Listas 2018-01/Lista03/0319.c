#include <stdio.h>

int main() {
    int valor, i;
    printf("Declare um valor positivo:\n");
    scanf("%d", &valor);
    for(i=1;i<=valor;i++){
        printf("%d ", i);
        if(i%5==0){
            printf("\n");
        }
    }
    return 0;
}