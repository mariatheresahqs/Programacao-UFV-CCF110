#include <stdio.h>

int main() {
    int variavel1, *ponteiroVariavel1;
    float variavel2, *ponteiroVariavel2;
    printf("Declare valores para uma variável inteira e uma variável real:\n");
    scanf("%d %f", &variavel1, &variavel2);
    ponteiroVariavel1 = &variavel1;
    ponteiroVariavel2 = &variavel2;
    printf("A variável inteira declarada foi %d, seu endereço de memória é %d, o valor do ponteiro é %d,\n"
           " o endereço do ponteiro é %d, o valor apontado pelo ponteiro é %d.\n", variavel1, &variavel1,
           ponteiroVariavel1, &ponteiroVariavel1, *ponteiroVariavel1);
    printf("A variável real declarada foi %d, seu endereço de memória é %d, o valor do ponteiro é %d,\n"
           " o endereço do ponteiro é %d, o valor apontado pelo ponteiro é %d.\n", variavel2, &variavel2,
           ponteiroVariavel2, &ponteiroVariavel2, *ponteiroVariavel2);
    return 0;
}