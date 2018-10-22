#include <stdio.h>

int main() {
    int valorN, i;
    printf("Declare um valor: \n");
    scanf("%d", &valorN);
    for(i=1;i<=valorN;i++){
        printf("%dX%d = %d\n", i, valorN, (i*valorN));
    }
    return 0;
}