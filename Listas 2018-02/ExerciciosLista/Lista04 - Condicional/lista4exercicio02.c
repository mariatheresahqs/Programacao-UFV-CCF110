#include <stdio.h>

int main() {
    float capital, juros, montanteMes;
    int i;
    printf("Declare o capital a ser investido: \n");
    scanf("%f", &capital);
    printf("Declare o valor do juros anual: \n");
    scanf("%f", &juros);
    juros = juros/100;
    for (i=1; i<=12; i++){
        printf("O montante do mês %d é: %.2f\n", i, capital);
        capital = capital + (capital*juros);
    }
    return 0;
}