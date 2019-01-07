#include <stdio.h>

int main() {
    int numeroA, numeroB;
    printf("Declare dois valores para saber se o primeiro é divisível pelo segundo: \n");
    scanf("%d %d", &numeroA, &numeroB);
    if(numeroB==0){
        printf("Divisão não pode ser realizada com divisor nulo.\n");
    }
    else if (numeroA%numeroB==0){
        printf("O primeiro valor é divisível pelo segundo.\n");
    }
    else{
        printf("O primeiro valor não é divisível pelo segundo.\n");
    }
    return 0;
}