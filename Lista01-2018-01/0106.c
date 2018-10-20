#include <stdio.h>

int main() {
    int numero, sucessor=0, antecessor=0;
    printf("Declare um valor numérico:\n");
    scanf("%d", &numero);
    sucessor = numero +1;
    antecessor = numero -1;
    printf("O número declarado foi %d, seu sucessor é %d, e seu antecessor é %d. \n", numero, sucessor, antecessor);
    return 0;
}