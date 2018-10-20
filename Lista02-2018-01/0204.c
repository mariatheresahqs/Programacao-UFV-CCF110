#include <stdio.h>

int main() {
    int mes;
    scanf("%d", &mes);
    if (mes>=1 && mes<=3){
        printf("Primeiro trimestre\n");
    }
    else if (mes>=4 && mes<=6){
        printf("Segundo trimestre\n");
    }
    else if (mes>=7 && mes<=9){
        printf("Terceiro trimestre\n");
    }
    else if (mes>=10 && mes<=12){
        printf("Quarto trimestre\n");
    }
    else {
        printf("Número de mês inválido\n");
    }
    return 0;
}