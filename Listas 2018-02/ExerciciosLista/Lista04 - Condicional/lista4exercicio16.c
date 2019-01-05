/*. Dados n e uma seqüência de n números inteiros, determinar a soma
dos números pares.*/

#include <stdio.h>

int main() {
    int nValores, somaPares, i;
    somaPares = 0;

    printf("Declare um valor: \n");
    scanf("%d", &nValores);

    for(i=0; i<nValores;i++){
        if(i%2==0){
            somaPares = somaPares + i;
        }
    }
    printf("A soma dos números pares de 0 até %d é %d", nValores, somaPares);

    return 0;
}