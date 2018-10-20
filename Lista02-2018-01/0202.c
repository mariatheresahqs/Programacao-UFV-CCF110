#include <stdio.h>

int main() {
    int numeroBola;
    float  valorDinheiro, premio, premioPago;
    printf("Declare o valor do dinheiro restante em caixa: \n");
    scanf("%f", &valorDinheiro);
    printf("Declare o número da bola sorteada: \n");
    scanf("%d", &numeroBola);
    if( numeroBola==0 || numeroBola==5){
        premio = 0.05;
    }
    else if (numeroBola==1){
        premio = 0.25;
    }
    else if (numeroBola==2 || numeroBola==9){
        premio = 0.1;
    }
    else if (numeroBola==3){
        premio = 0.07;
    }
    else if (numeroBola==4){
        premio = 0.08;
    }
    else if (numeroBola==6){
        premio = 0.15;
    }
    else if (numeroBola==7){
        premio = 0.12;
    }
    else if (numeroBola==8){
        premio = 0.03;
    }
    premioPago = valorDinheiro*premio;
    printf("O valor pago em premio foi %.2f.\n", premioPago);

    return 0;
}