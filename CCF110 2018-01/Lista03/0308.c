#include <stdio.h>

int main() {
    int valores[100], tamanho=10, i;
    for(i=0;i<tamanho;i++){
        scanf("%d", &valores[i]);
    }
    for(i=0;i<tamanho;i++){
        printf("%.2f ",(valores[i])/2.0);
    }
    return 0;
}