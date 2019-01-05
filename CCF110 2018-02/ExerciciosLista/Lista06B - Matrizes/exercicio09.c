#include <stdio.h>

int main() {
    int delegacoes, atletas, i=0, j=0;
    delegacoes = 5;
    atletas = 10;
    float jogosVerao[delegacoes][atletas], maior=0;
    for (i = 0; i <delegacoes ; i++) {
        printf("Declare as alturas dos atletas da delegação %d: \n", i+1);
        for (int j = 0; j < atletas; ++j) {
            scanf("%f", &jogosVerao[i][j]);
        }

    }
    for (i = 0; i <delegacoes ; i++) {
        printf("O atleta mais alto da delegação %d é: \n", i+1);
        for (int j = 0; j < atletas; ++j) {
            if (jogosVerao[i][j]>maior){
                maior = jogosVerao[i][j];
            }
        }
        printf("%.2f\n", maior);
        maior = 0;
    }
    return 0;
}