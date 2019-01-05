/*Em uma eleição presidencial, existem quatro candidatos. Os votos são
informados através de código. Os dados utilizados para a escrutinagem
obedecem à seguinte codificação:
- 1, 2, 3 e 4 = voto para os respectivos candidatos;
- 5 voto nulo;
- 6 voto em branco;
Elaborar um algoritmo que leia N como sendo o número de eleitores, e em
seguida leia os N votos de cada eleitor e calcule e escreva:
a) O total de votos para cada candidato;
b) O total de votos nulos;
c) O total de votos em branco;
d) O percentual dos votos em branco e nulos sobre o total. */


#include <stdio.h>

int main() {
    int N, i, numeroVoto, qntVoto1, qntVoto2, qntVoto3,qntVoto4, qntVotoNulo, qntVotoBranco, qntVotoInvalido, totalVotos;
    float percentualBrancoNulo, totalBrancoNulo;

    qntVoto1 = qntVoto2 = qntVoto3 = qntVoto4 = qntVotoNulo = qntVotoBranco = qntVotoInvalido =0;

    printf("Declare o número de eleitores: \n");
    scanf("%d", &N);

    for (i=0; i<N; i++) {
        printf("Digite o número do voto:\n");
        scanf("%d", &numeroVoto);


        if (numeroVoto == 1) {
            qntVoto1++;
        } else if (numeroVoto == 2) {
            qntVoto2++;
        } else if (numeroVoto == 3) {
            qntVoto3++;
        } else if (numeroVoto == 4) {
            qntVoto4++;
        } else if (numeroVoto == 5) {
            qntVotoNulo++;
        } else if (numeroVoto == 6) {
            qntVotoBranco++;
        } else {
                printf("O valor informado não é válido.\n");
                qntVotoInvalido++;
            }
    }

    totalVotos = qntVoto1 + qntVoto2 + qntVoto3 + qntVoto4 + qntVotoNulo + qntVotoBranco + qntVotoInvalido;
    totalBrancoNulo = qntVotoNulo + qntVotoBranco;
    percentualBrancoNulo = (totalBrancoNulo/totalVotos)*100;

    printf("O total de votos para cada candidato é:\n"
           "Candidato 1: %d \n"
           "Candidato 2: %d \n"
           "Candidato 3: %d \n"
           "Candidato 4: %d \n", qntVoto1, qntVoto2, qntVoto3, qntVoto4);
    printf("A quantidade de votos nulos e em branco foi:\n"
           "Nulos: %d \n"
           "Brancos: %d \n", qntVotoNulo, qntVotoBranco);
    printf("O percentual de votos nulos e em branco é: %.2f", percentualBrancoNulo);


    return 0;
}