#include <stdio.h>

int main() {
    int divisor, dividendo, quociente, resto;
    printf("Declare valores para o dividendo e o divisor:\n");
    scanf("%d %d", &dividendo, &divisor);
    if (divisor==0){
        printf("Divisão não permitida.\n");
    } else{
        quociente = dividendo/divisor;
        resto = dividendo%divisor;
        printf("O quociente da divisão é %d e o resto é %d", quociente, resto);
    }
    return 0;
}