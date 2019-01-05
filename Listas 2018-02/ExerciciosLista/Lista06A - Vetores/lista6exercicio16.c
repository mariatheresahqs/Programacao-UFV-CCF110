#include <stdio.h>

int main() {
    int qntAtletas, i;
    qntAtletas=10;
    float alturasAtletas[qntAtletas], somaAlturas=0.0, media;
    printf("Declare a altura de %d atletas: \n", qntAtletas);
    for(i=0; i<qntAtletas;i++){
        scanf("%f", &alturasAtletas[i]);
        somaAlturas = somaAlturas + alturasAtletas[i];
    }
    media = somaAlturas/qntAtletas;
    for(i=0; i<qntAtletas;i++){
        if(alturasAtletas[i]>media){
            printf("O atleta de altura %.2f tem altura acima que a média.\n", alturasAtletas[i]);
        }
    }

    return 0;
}
