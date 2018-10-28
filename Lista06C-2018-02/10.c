#include <stdio.h>

int main() {
    int tamanho;
    tamanho = 5;
    int ids[tamanho], i, id;
    float valorCliente[tamanho], faturamento=0;
    for (i=0; i<tamanho;i++){
        scanf("%d", &ids[i]);
        id = ids[i];
        if(id<0){
            break;
        }
        scanf("%f", &valorCliente[i]);
        faturamento+= valorCliente[i];
        printf("O cliente %d deve pagar %.2f.\n", ids[i], valorCliente[i]);
    }
    printf("O faturamento do dia foi: %.2f.\n", faturamento);
    return 0;
}