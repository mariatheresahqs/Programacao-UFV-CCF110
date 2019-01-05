/*A prefeitura de Contagem abriu uma linha de crédito para os
funcionários estatutários. O valor máximo da prestação não poderá
ultrapassar 30% do salário bruto. Fazer um algoritmo que permita
entrar com o salário bruto e o valor da prestação, e informar se o
empréstimo pode ou não ser concedido. */

#include <stdio.h>

int main() {
    float salarioBruto, valorPrestacao, percentualPrestacao;

    printf("Declare o valor desejado de empréstimo: \n");
    scanf("%f", &valorPrestacao);
    printf("Declare o valor do salário bruto do funcionário: \n");
    scanf("%f", &salarioBruto);

    percentualPrestacao = (valorPrestacao/salarioBruto)*100;

    if (percentualPrestacao>30){
        printf("Empréstimo não permitido.");
    }
    else {
        printf("Empréstimo aprovado.");
    }
    return 0;
}