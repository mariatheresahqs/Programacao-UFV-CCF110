#include <stdio.h>

int main() {
    int numeroA, numeroB;
    printf("Declare dois valores: \n");
    scanf("%d %d",&numeroA, &numeroB);
    if (numeroA>numeroB){
        printf("Primeiro valor é maior que o segundo.\n");
    } else if (numeroA==numeroB){
        printf("Os valores declarados são iguais.\n");
    } else{
        printf("O primeiro valor é inferior ao segundo.\n");
    }
    return 0;
}