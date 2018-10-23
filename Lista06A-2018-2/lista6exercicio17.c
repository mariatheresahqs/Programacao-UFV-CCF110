#include <stdio.h>

int main() {
    int mercadorias;
    mercadorias =10;
    int qndVendas[mercadorias], i;
    float precosVendas[mercadorias], faturamento=0;
    for(i=0; i<mercadorias;i++){
        qndVendas[i]=0;
        precosVendas[i]=0;
    }
    printf("Declare o número de mercadorias vendidas seguindo ordem crescente de identificador: \n");
    for(i=0;i<mercadorias;i++){
        scanf("%d", &qndVendas[i]);
    }
    printf("Declare os preços das mercadorias seguindo ordem crescente de identificador: \n");
    for(i=0;i<mercadorias;i++){
        scanf("%f", &precosVendas[i]);
    }
    for(i=0; i<mercadorias;i++){
        faturamento = faturamento + (qndVendas[i]*precosVendas[i]);
    }
    printf("O faturamento do armazém esse mês foi: %.2f", faturamento);
    return 0;
}