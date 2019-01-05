#include <stdio.h>

int main() {
    int tamanho, i;
    tamanho = 100;
    float qntVendida[tamanho], preco[tamanho];
    float faturamento=0;
    for(i=0; i<tamanho; i++){
        printf("Declare o preço da mercadoria %d e a quantidade vendida da mesma durante o mês:\n", (i+1));
        scanf("%f", &preco[i]);
        scanf("%f", &qntVendida[i]);
        faturamento+= (preco[i]*qntVendida[i]);
    }
    printf("O faturamento do armazém no mês declarado é: %.2f\n", faturamento);
    return 0;
}