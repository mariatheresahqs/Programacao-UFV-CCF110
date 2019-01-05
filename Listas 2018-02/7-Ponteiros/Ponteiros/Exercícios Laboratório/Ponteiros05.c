#include <stdio.h>

int main() {
    short int v[5] = {2, 5, 1, 4, 0}, *ponteiroShort, tamanhobyteShort=0;
    int v1[5] = {2, 5, 1, 4, 0}, *ponteiroInt, i, tamanhobyteInt=0;
    char c[5] = {'a', 'b', 'm', '4', '-'}, *ponteiroChar, tamanhobyteChar=0;
    float f[5] = {2.66, 0.125, 1.0, 4.99, 2.009}, *ponteiroFloat, tamanhobyteFloat=0;
    double d[5] = {2.66, 0.125, 1.0, 4.99, 2.009}, *ponteiroDouble, tamanhobyteDouble=0;

    ponteiroShort = v;
    ponteiroInt = v1;
    ponteiroChar = c;
    ponteiroFloat = f;
    ponteiroDouble = d;

    for (i = 0; i < 5; i++) {
        printf("\nO vetor do tipo short tem os seguintes endereços: %d\n"
               "A quantidade em bytes ocupado pelos elementos é: %d\n"
               "O valor do vetor é: %d\n", ponteiroShort, sizeof(*ponteiroShort),*ponteiroShort);
        ponteiroShort++;
        tamanhobyteShort += sizeof(*ponteiroShort);
    }
    printf("\nO número de bytes usado pelo vetor foi %d.\n", tamanhobyteShort);
    printf("======================\n");

    for (i = 0; i < 5; i++) {
        printf("\nO vetor do tipo inteiro tem os seguintes endereços: %d\n"
               "A quantidade em bytes ocupado pelos elementos é: %d\n"
               "O valor do vetor é: %d\n", ponteiroInt, sizeof(*ponteiroInt),*ponteiroInt);
        ponteiroInt++;
        tamanhobyteInt += sizeof(*ponteiroInt);
    }
    printf("\nO número de bytes usado pelo vetor foi %d.\n", tamanhobyteInt);
    printf("======================\n");

    for (i = 0; i < 5; i++) {
        printf("\nO vetor do tipo caracter tem os seguintes endereços: %d\n"
               "A quantidade em bytes ocupado pelos elementos é: %d\n"
               "O valor do vetor é: %c\n", ponteiroChar, sizeof(*ponteiroChar),*ponteiroChar);
        ponteiroChar++;
        tamanhobyteChar += sizeof(*ponteiroChar);
    }
    printf("\nO número de bytes usado pelo vetor foi %d.\n", tamanhobyteChar);
    printf("======================\n");

    for (i = 0; i < 5; i++) {
        printf("\nO vetor do tipo float tem os seguintes endereços: %d\n"
               "A quantidade em bytes ocupado pelos elementos é: %d\n"
               "O valor do vetor é: %f\n", ponteiroFloat, sizeof(*ponteiroFloat),*ponteiroFloat);
        ponteiroFloat++;
        tamanhobyteFloat += sizeof(*ponteiroFloat);
    }
    printf("\nO número de bytes usado pelo vetor foi %d.\n", tamanhobyteFloat);
    printf("======================\n");

    for (i = 0; i < 5; i++) {
        printf("\nO vetor do tipo double tem os seguintes endereços: %d\n"
               "A quantidade em bytes ocupado pelos elementos é: %d\n"
               "O valor do vetor é: %lf\n", ponteiroDouble, sizeof(*ponteiroDouble),*ponteiroDouble);
        ponteiroDouble++;
        tamanhobyteDouble += sizeof(*ponteiroDouble);
    }
    printf("\nO número de bytes usado pelo vetor foi %d.\n", tamanhobyteFloat);
    printf("======================\n");
    return 0;
}
