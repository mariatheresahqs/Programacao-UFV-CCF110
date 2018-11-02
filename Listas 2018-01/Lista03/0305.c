#include <stdio.h>

int main() {
    int idadeDias, anos, meses, dias;
    printf("Declare a idade em dias:\n");
    scanf("%d", &idadeDias);
    anos = idadeDias/365;
    meses = (idadeDias - (365*anos))/30.0;
    dias = idadeDias - (365*anos) - (meses*30);
    printf("A idade declara em dias convertida em anos, meses e dias é: %d, %d e %d.\n", anos, meses, dias);
    return 0;
}