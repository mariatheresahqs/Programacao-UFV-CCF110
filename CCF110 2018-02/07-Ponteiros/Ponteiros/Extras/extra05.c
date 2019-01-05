#include <stdio.h>
typedef struct {
    char nome[50];
    int matricula;
    float notas[5];
    float somaNotas;
    float media;
}tipoHistoricoEscolar;

int main() {
    int i, j, nAlunos, nProvas=5;
    printf("Declare a quantidade de registros a serem inseridos:\n");
    scanf("%d", &nAlunos);
    tipoHistoricoEscolar dadoAluno, bancoDadosAlunos[nAlunos];
    dadoAluno.somaNotas=0;
    for(i=0;i<nAlunos;i++){
        printf("Digite o nome do aluno:\n");
        getchar();
        scanf("%[^\n]", dadoAluno.nome);
        printf("Digite o número de matrícula:\n");
        scanf("%d", &dadoAluno.matricula);
        printf("Declare as notas do aluno:\n");
        for (j=0;j<nProvas;j++) {
            scanf("%f", &dadoAluno.notas[j]);
            dadoAluno.somaNotas+= dadoAluno.notas[j];
        }
        dadoAluno.media = dadoAluno.somaNotas/nProvas;
        if(dadoAluno.media>6.0){
            printf("Aluno %s aprovado.\n", dadoAluno.nome);
        }
        else if(dadoAluno.media<6.0){
            printf("Aluno %s reprovado.\n", dadoAluno.nome);
        }
        bancoDadosAlunos[i] = dadoAluno;
        dadoAluno.somaNotas = 0;
    }
    /*printf("\n");
    for(i=0;i<nAlunos;i++){
        printf("%s\n", bancoDadosAlunos[i].nome);
        printf("%d\n", bancoDadosAlunos[i].matricula);
        for(j=0;j<nProvas;j++){
            printf("%.2f ", bancoDadosAlunos[i].notas[j]);
        }
        printf("\n");
        printf("%.2f\n", bancoDadosAlunos[i].somaNotas);
        printf("%.2f\n", bancoDadosAlunos[i].media);
    }*/
    return 0;
}