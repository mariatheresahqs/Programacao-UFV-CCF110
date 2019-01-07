#include <stdio.h>

int main() {
    float salarioMinimo, salarioPessoa, qntSalarioMin;
    printf("Declare o valor do salário mínimo: \n");
    scanf("%f",&salarioMinimo);
    printf("Declare o valor recebido: \n");
    scanf("%f", &salarioPessoa);
    qntSalarioMin = salarioPessoa/salarioMinimo;
    printf("O valor declarado é equivalente a %.2f salários mínimos.\n", qntSalarioMin);
    return 0;
}