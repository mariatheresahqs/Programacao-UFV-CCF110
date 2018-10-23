#include <stdio.h>
#include <math.h>

int main() {
    int tamanho, i;
    printf("Declare o tamanho do vetor:\n");
    scanf("%d", &tamanho);
    int elemento[tamanho];
    printf("Declare os elementos do vetor de tamanho %d:\n", tamanho);
    for(i=0;i<tamanho;i++){
        scanf("%d", &elemento[i]);
    }
    for(i=0; i<tamanho;i++){
        elemento[i] = pow(elemento[i],3);
        printf("%d ", elemento[i]);
    }
    return 0;
}
