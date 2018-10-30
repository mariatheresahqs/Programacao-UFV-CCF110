/*. Escreva um algoritmo para determinar se um número A é divisível por
um outro número B. Esses valores devem ser fornecidos pelo usuário.*/

#include <stdio.h>

int main() {
    int numeroA, numeroB, divisao;

    printf("Declare dois valores:\n");
    scanf("%d %d", &numeroA, &numeroB);

    if (numeroB==0){
        printf("Não é possível realizar a divisão do primeiro número pelo segundo\n"
               "dado que o segundo número é 0 e não se pode dividir um número por 0.");
    }
    else if (numeroA%numeroB==0){
        divisao = numeroA/numeroB;
        printf("O primeiro valor é divisível pelo segundo.");
    }
    else {
        printf("O primeiro valor não é divisível pelo segundo.");
    }
    return 0;
}