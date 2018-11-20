#include <stdio.h>

typedef struct {
    char nome[50];
    float notas[5];
}tipoRegistroNotas;

int main() {
    int quantidade, i, j;
    float contadorDisciplina3=0.0, percentualAprovados3;
    printf("Digite o número de alunos na turma:\n");
    scanf("%d", &quantidade);
    tipoRegistroNotas aluno, turma[quantidade];
    for(i=0;i<quantidade; i++){
        printf("Digite o nome do aluno:\n");
        getchar();
        scanf("%[^\n]s", aluno.nome);
        for (j=0;j<5;j++) {
            printf("Digite o valor da prova %d:\n", j+1);
            scanf("%f", &aluno.notas[j]);
        }
        turma[i] = aluno;
    }
    printf("\n");
    printf("Registro de alunos e notas:\n");
    for(i=0;i<quantidade;i++){
        printf("%s: ", turma[i].nome);
        for(j=0;j<5;j++){
            printf("%.1f  ", turma[i].notas[j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Alunos aprovados em todas as disciplinas:\n");
    for(i=0;i<quantidade; i++){
        if((turma[i].notas[0]>=7.0)&&(turma[i].notas[1]>=7.0)&&(turma[i].notas[2]>=7.0)&&(turma[i].notas[3]>=7.0)&&(turma[i].notas[4]>=7.0)){
            printf("%s\n",turma[i].nome);
        }

    }
    printf("\n");
    printf("Alunos aprovados nas disciplinas 1 e 4:\n");
    for(i=0;i<quantidade; i++){
        for (j=0;j<5;j++) {
            if((turma[i].notas[0]>=7.0)&&(turma[i].notas[3]>=7.0)){
                printf("%s.\n", turma[i].nome);
                break;
            }
        }
        if(turma[i].notas[2]>=7.0){
            contadorDisciplina3+=1.0;
        }
    }
    printf("\n");
    percentualAprovados3 = contadorDisciplina3/quantidade;
    //printf("%.1f\n", contadorDisciplina3);
    //printf("%d\n",quantidade);
    printf("Percentual de alunos aprovados na disciplina 3 é: %.2f.\n", percentualAprovados3);
    return 0;
}