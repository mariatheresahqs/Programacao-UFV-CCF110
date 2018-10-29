#include <stdio.h>
#include <math.h>

int main() {
    float graos=1;
    while(graos<63){
        graos+= pow(graos,2);
    }
    printf("O numero de milhos depositados em um tabuleiro de xadrez de 64 quadros é: %.2f.\n", graos);
    return 0;
}
