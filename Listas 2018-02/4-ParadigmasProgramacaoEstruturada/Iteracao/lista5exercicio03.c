#include <stdio.h>

int main() {
    int qntPessoas;
    qntPessoas=10;
    int idadesPessoas[qntPessoas], i, soma=0, media;
    printf("Declare a idade de %d pessoas: \n", qntPessoas);
    for(i=0;i<qntPessoas;i++){
        scanf("%d", &idadesPessoas[i]);
        soma = soma + idadesPessoas[i];
    }
    media = soma/qntPessoas;
    printf("A idade média do grupo declarado é %d.\n", media);
    return 0;
}