#include <stdio.h>

int main() {
    int valorN, i=1;
    printf("Declare um valor: \n");
    scanf("%d", &valorN);
    while(i<=valorN){
        printf("%dX%d = %d\n", i, valorN, (i*valorN));
        i++;
    }
    return 0;
}