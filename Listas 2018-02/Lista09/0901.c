#include <stdio.h>

int sinal(int valorDeclarado){
    int flagSinal;
    if(valorDeclarado>0){
        flagSinal = 1;
    } else if( valorDeclarado<0){
        flagSinal = 0;
    }
    return flagSinal;
}

int main() {
    int valor, sinalValor;
    while(1){
        printf("Declare um valor diferente de zero:\n");
        scanf("%d", &valor);
        if(valor!=0){
            break;
        }
    }
    sinalValor = sinal(valor);
    if(sinalValor==1){
        printf("O valor declarado é positivo.\n");
    } else{
        printf("O valor declarado é negativo.\n");
    }
    return 0;
}