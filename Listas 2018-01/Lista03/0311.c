#include <stdio.h>

int main() {
    int valor, quadrado;
    while(1){
        printf("Declare um valor:\n");
        scanf("%d", &valor);
        quadrado = valor*valor;
        if(valor%6==0){
            printf("Valor declarado é múltiplo de 6, e seu quadrado é %d.\n", quadrado);
            break;
        } else{
            printf("O quadrado do valor declarado é %d.\n", quadrado);
        }
    }
    return 0;
}
