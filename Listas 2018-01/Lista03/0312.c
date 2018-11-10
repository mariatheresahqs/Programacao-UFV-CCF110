#include <stdio.h>

int main() {
    int valor;
    float qntPar=0, qntImpar=0, somaPar=0, somaImpar=0, mediaPar, mediaImpar, maiorPar, menorImpar;
    maiorPar = 0;
    menorImpar = 999;
    printf("Digite os valores desejados, e para encerrar o programa declare um valor negativo.\n");
    while(1){
        scanf("%d", &valor);
        if(valor<0){
            break;
        }
        if(valor%2==0){
            somaPar+= valor;
            qntPar++;
            if(valor>maiorPar){
                maiorPar=valor;
            }
        } else{
            somaImpar+=valor;
            qntImpar++;
            if(valor<menorImpar){
                menorImpar=valor;
            }
        }
    }
    mediaPar = somaPar/qntPar;
    mediaImpar = somaImpar/qntImpar;

    printf("A media dos valores pares digitados é: %.2f.\n", mediaPar);
    printf("A media dos valores impares digitados é: %.2f.\n", mediaImpar);
    printf("O maior valor digitado foi: %.2f.\n", maiorPar);
    printf("O menor valor digitado foi: %.2f.\n", menorImpar);

    return 0;
}
