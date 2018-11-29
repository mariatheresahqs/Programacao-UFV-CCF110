#include <stdio.h>

typedef struct{
    int numeroConta;
    int numeroCliente;
    float valorSaldo;
}dadosBancarios;


int main() {
    int achouConta=0, achouCliente=0, quantidadeContas, i, j;
    float valorSacar;
    dadosBancarios contaBancaria, dadosClientes;//Declaracao tipo
    printf("Declare quantas contas serão cadastradas:\n");
    scanf("%d", &quantidadeContas);
    dadosBancarios nContas[quantidadeContas];//Declaracao tipo
    for(i=0;i<quantidadeContas;i++){
        printf("Digite o número da conta:\n");
        scanf("%d", &dadosClientes.numeroConta);
        printf("Digite o número do cliente:\n");
        scanf("%d", &dadosClientes.numeroCliente);
        printf("Digite o valor de saldo:\n");
        scanf("%f", &dadosClientes.valorSaldo);
        nContas[i] = dadosClientes;
    }

    for(i=0;i<quantidadeContas;i++){
        printf("%d\n", nContas[i].numeroConta);
        printf("%d\n", nContas[i].numeroCliente);
        printf("%.2f\n", nContas[i].valorSaldo);
    }
    printf("\n");

    while(1) {
        printf("Digite o número da conta:\n");
        scanf("%d", &contaBancaria.numeroConta);
        if(contaBancaria.numeroConta == -1){
            break;
        }
        for(i=0; i<quantidadeContas; i++){
            if(contaBancaria.numeroConta == nContas[i].numeroConta){
                achouConta=1;
                printf("Digite o número do cliente:\n");
                scanf("%d", &contaBancaria.numeroCliente);
                if(contaBancaria.numeroCliente == nContas[i].numeroCliente){
                    achouCliente=1;
                    printf("Declare o valor a ser sacado:\n");
                    scanf("%f", &valorSacar);
                    if(valorSacar > nContas[i].valorSaldo){
                        printf("Valor declarado de saque superior a valor de saldo.\n");
                    } else{
                        nContas[i].valorSaldo -= valorSacar;
                        printf("A conta %d tem o novo valor de saldo de %.2f.\n", nContas[i].numeroConta, nContas[i].valorSaldo);
                    }
                }

            }
        }
        if(achouConta==0){
            printf("Número de conta declarado é inválido.\n");
            break;
        }
        if(achouCliente==0){
            printf("Número de cliente declarado é inválido.\n");
            break;
        }

    }
    return 0;
}