/*Dado um inteiro não-negativo n, determinar n! (fatorial de n).*/

#include <stdio.h>

int main() {
    int nValor, nFatorial, i;

    nFatorial = 1;

    printf("Declare um valor não-negativo: \n");
    scanf("%d", &nValor);

    if (nValor<0){
        while(nValor<0){
            printf("Declare um valor não-negativo: \n");
            scanf("%d", &nValor);
        }
    }

    for(i=1;i<=nValor;i++){
        nFatorial = nFatorial*i;
    }

    printf("O fatorial de %d é %d.\n", nValor, nFatorial);

    return 0;
}