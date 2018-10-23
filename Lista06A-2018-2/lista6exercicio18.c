#include <stdio.h>

int main() {
    int idCliente[999], i=0, count=0, loop=1;
    float faturamento=0, valorPagar[999];
    while (loop == 1) {
        printf("Digite o identificador do cliente: \n");
        scanf("%d", &idCliente[i]);
        if (idCliente[i]<0){
            break;
        }
        printf("Digite o valor a pagar: \n");
        scanf("%f", &valorPagar[i]);
        printf("O cliente %d deve pagar %.2f.\n\n", idCliente[i], valorPagar[i]);
        count++;
        i++;
    }
    for(i=0;i<count;i++){
        faturamento += valorPagar[i];
    }
    printf("O faturamento do dia foi: %.2f.\n",faturamento);
    return 0;
}