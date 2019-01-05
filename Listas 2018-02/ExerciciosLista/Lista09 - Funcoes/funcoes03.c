#include <stdio.h>

void maior (){
    int valor1, valor2;
    printf("Declare dois valores:\n");
    scanf("%d %d", &valor1, &valor2);
    if(valor1>valor2){
        printf("O primeiro valor é maior que o segundo.\n");
    }else if(valor2>valor1){
        printf("O segundo valor é maior que o primeiro.\n");
    } else{
        printf("Os valores são iguais.\n");
    }
}

int main() {
    maior();
    return 0;
}