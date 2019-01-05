#include <stdio.h>

int main() {
    int valor1, valor2, *ponteiro;
    valor1 =0;
    ponteiro = &valor1;// ponteiro = endereco da variavel valor1
    valor2 = *ponteiro;//valor2 = 0
    valor2 =4;//valor2=4
    (*ponteiro)++;//valor1=1 e *ponteiro=1
    --valor2;//valor2=3
    (*ponteiro)+=valor2;//*ponteiro=4 e valor1=4
    printf("Os valores das variáveis 1 e 2 são: %d e %d. E o ponteiro tem valor %d.\n", valor1, valor2, *ponteiro);

    return 0;
}