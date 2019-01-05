#include <stdio.h>

int main() {
    int valor1, *ponteiro;
    valor1=100;
    ponteiro=&valor1;//ponteiro deve receber (&) endereco da variavel
    printf("O valor da variável é %d.\nO endereço da variável é %d.\n"
           "O valor do ponteiro é %d.\nO valor da variável que o ponteiro aponta é %d.\n", valor1,&valor1,ponteiro,*ponteiro);
    return 0;
}