#include <stdio.h>

int main() {
    int nota1, nota2, nota3;
    float soma=0.0, media;
    printf("Declare as três notas do aluno:\n");
    scanf("%d %d %d", &nota1, &nota2, &nota3);
    soma = nota1*2 + nota2*3 + nota3*5;
    media = soma/3.0;
    printf("A média das notas, com a média ponderada, é %.2f.\n", media);
    return 0;
}