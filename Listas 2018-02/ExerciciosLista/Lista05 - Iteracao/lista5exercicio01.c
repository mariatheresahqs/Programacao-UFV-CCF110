#include <stdio.h>

int main() {
    int dia, mes, ano, i;

    printf("Declare a data no seguinte formato: dia, mês(valor numérico) e ano.\n");
    scanf("%d %d %d", &dia,&mes,&ano);
    if ((dia>31 || dia<1) || (mes<1 || mes>12) || (ano<0)){
        printf("Valor inválido.\n");

    }
    else if ((mes==2) && (ano%4!=0) && (dia>28)){
        printf("Valor inválido.\n");
    }
    else if ((mes==2) && (ano%4==0) && (dia>29)) {
        printf("Valor inválido.\n");
    }
    else if ((mes==3 || mes==4 || mes==6 || mes==9 || mes== 11) && (dia>30)){
        printf("Valor inválido.\n");
    }
    else {
        printf("Valor válido.\n");
    }

    return 0;
}
