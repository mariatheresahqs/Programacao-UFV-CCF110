#include <stdio.h>

int main() {
    float salario, aumento;
    aumento= 0.15;
    printf("Declare o valor do salário: \n");
    scanf("%f", &salario);
    if(salario<500.00){
        salario = salario + salario*aumento;
        printf("O novo salário é: %.2f\n", salario);
    } else {
        printf("Esse salário não será contemplado com o aumento.\n");
    }
    return 0;
}