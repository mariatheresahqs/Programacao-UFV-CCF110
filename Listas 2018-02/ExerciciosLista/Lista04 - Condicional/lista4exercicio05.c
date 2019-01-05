/* Em uma padaria existem dois tipos de pães: Sal que custa R$0,10 e
doce que custa R$0,15. Supondo que o cliente fizesse a compra de
apenas um tipo de pão, faça um programa que leia a quantidade de
pães, leia o tipo do pão escolhido e calcule e imprima o valor a ser
pago.*/

#include <stdio.h>

int main() {
    int tipoPao,quantidade;
    float valorPagar=0;
    printf("Declare o tipo de pão: \n1.Sal\n2.Doce\n");
    scanf("%d", &tipoPao);

    while (tipoPao!=1 && tipoPao!=2){
        printf("Valor declarado não se enquadra.\n");
        printf("Declare o tipo de pão: \n1.Sal\n2.Doce\n");
        scanf("%d", &tipoPao);
    }
    printf("Declare a quantidade:\n");
    scanf("%d", &quantidade);

    if (tipoPao == 1) {
        valorPagar = quantidade * 0.1;
    }
    else {
        valorPagar = quantidade * 0.15;
        }
    printf("O valor a pagar é: %.2f", valorPagar);


    return 0;
}