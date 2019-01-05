#include <stdio.h>

int main() {
    int variavel1;
    float variavel2;
    char variavel3;
    printf("Atribua valores para uma variável inteira, real e um caracter:\n");
    scanf("%d %f %c", &variavel1, &variavel2, &variavel3);
    printf("A variável inteiro tem o valor %d, o tamanho %d, e o endereço %d.\n",variavel1, sizeof(variavel1), &variavel1);
    printf("A variável real tem o valor %.2f, o tamanho %d, e o endereço %d.\n",variavel2, sizeof(variavel2), &variavel2);
    printf("A variável char tem o valor %c, o tamanho %d, e o endereço %d.\n",variavel3, sizeof(variavel3), &variavel3);
    return 0;
}