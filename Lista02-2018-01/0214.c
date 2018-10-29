#include <stdio.h>

int main() {
    int fatorial=1, valor, i, termo=1;
    printf("Declare um valor:\n");
    scanf("%d", &valor);
    for(i=0;i<valor;i++){
        if(valor==0 || valor==1){
            fatorial = 1;
        } else {
            fatorial *= termo;
        }
        termo++;
    }
    printf("O fatorial de %d é %d.\n", valor, fatorial);
    return 0;
}
